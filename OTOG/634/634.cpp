#include <bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;
using lli = unsigned long long int;


#define rep(i,k,n) for(int i=(k);i!=int(n);++i)
#define sz(x) x.size()
#define all(x) x.begin(),x.end()
#define dbg(x) cout << "debug :" << x << "\n"
#define dbg2(x,y) cout << "debug :" << x << ":" << y << "\n"
#define input() (*istream_iterator<int>(cin))
#define strin() (*istream_iterator<string>(cin))
#define output(x) cout << x

struct hash_int {

    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x+ FIXED_RANDOM);
    }

};

unordered_map<lli, lli, hash_int> hash_table;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = input(), q = input();
    while(t--) {
        int n = input();
        lli hval = 1, p = 19;
        for(int i = 0; i < n-1; ++i){
            int u = input(), v = input();
            if(u>v) swap(u, v);
         		u++, v++;
            hval += ((u*u)*(v*v)*p);
        }
        //dbg(hval);
        hash_table[hval]++;
    }
    while(q--) {
      int n = input();
      lli hval = 1, p = 19;
        for(int i = 0; i < n-1; ++i){
            int u = input(), v = input();
            if(u>v) swap(u, v);
            u++, v++;
            hval += ((u*u)*(v*v)*p);
        }
        //dbg(hval);
        auto itr = hash_table.find(hval);
        if(itr != hash_table.end()) cout << itr -> second << "\n";
        else cout << 0 << "\n";
    }
}