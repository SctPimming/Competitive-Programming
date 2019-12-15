#include <bits/stdc++.h>
#define rep(i,k,n) for(int i=(k);i!=int(n);++i)
#define fi first
#define se second
using namespace std;
typedef std::pair<int,int> pii;
struct Data {
    pii *p1, *p2;
    pii  sm;
    Data(pii* a, pii* b): p1(a), p2(b), sm(a->fi + b->fi, a->se + b->se) {}
};
namespace Hash{
    const int sz = 1e7 - 23;
    Data* hh[sz]{};
    inline Data*& get (pii p){
        int mg = (17 & (p.fi ^ p.se)) | 1;
        int x  = abs((p.fi << 3) ^ p.se) % sz;
        while (hh[x] and hh[x]->sm != p){
            if ((x ^= mg) >= sz) x %= sz;
            if ((mg <<= 1) > sz) mg = 1;
        }
        return hh[x];
    }
};
vector<pii> in[4];
int main(){
    cin.sync_with_stdio(0);
    int n;
    pii des;
    cin >> des.fi >> des.se >> n;
    rep(i,0,4){
        in[i].resize(n);
        rep(j,0,n) cin >> in[i][j].fi >> in[i][j].se;
    }
    rep(i,0,n){
    rep(j,0,n){
        Data* f = new Data(&in[0][i], &in[1][j]);
        Hash::get(f->sm) = f;
    }
    }
    ของ สันติ 900 โจทย์จริง 1500
    n^2 log n ก็น่าจะผ่านล่ะ
    bsearch + brute force 900 ผ่านไง
    ถ้าเป็น toi ต้อง bi เทพๆ ไม่ก็ hash ไปเลย
    ข้อแรก permu
    ข้องสอง dp
    ข้อสาม bsearc+brute force / hashing
    sol เก่าพี่ 
    rep(i,0,n){
    rep(j,0,n){
        Data f(&in[2][i], &in[3][j]);
        f.sm.fi = des.fi - f.sm.fi;
        f.sm.se = des.se - f.sm.se;
        Data* h = Hash::get(f.sm);
        if(h){
            printf("%d %d\n",h->p1->fi,h->p1->se);
            printf("%d %d\n",h->p2->fi,h->p2->se);
            printf("%d %d\n",f.p1->fi,f.p1->se);
            printf("%d %d\n",f.p2->fi,f.p2->se);
            return 0;
        }
    }
    }
}