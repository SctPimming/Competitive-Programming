#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define rep(i,k,n) for(int i=(k);i!=int(n);++i)
#define sz(x) x.size()
#define all(x) x.begin(),x.end()
#define dbg(x) cout << "debug :" << x << endl;
#define dbg2(x,y) cout << "debug :" << x << ":" << y << endl;
#define input() (*istream_iterator<int>(cin))
#define spc " "
#define ln "\n"

using pii = pair<int, int>;
const int mxn = 910, hsz = 1e6+10;
struct coor{
	int x, y;
};
int hash_table[hsz], idx = 0;
coor sumup[mxn*mxn], sumdw[mxn*mxn];
coor inp1[mxn], inp2[mxn];
int cmp(const void* lhs, const void* rhs){
	coor a = *(coor*) lhs, b =*(coor*) rhs;
	if(a.x == b.x) return a.y > b.y;
	else return a.x > b.x;
}
int main(){
	int dx = input(), dy = input();
	int n = input();
	for(int t = 0; t != 2; ++t){
		for(int i = 0; i != n; ++i){
			if(t==0) cin >> inp1[i].x >> inp1[i].y;
			else cin >> inp2[i].x >> inp2[i].y;
		}
	}
	for(int i = 0; i != n; ++i){
		for(int j = 0; j != n; ++j) {
			sumup[idx].x = inp1[i].x + inp2[j].x;
			sumup[idx].y = inp1[i].y + inp2[j].y;
			idx++;
		}
	}
	
	//for(int i = 0; i != idx; ++i) dbg2(sumup[i].x, sumup[i].y);
	idx = 0;
	for(int t = 0; t != 2; ++t){
		for(int i = 0; i != n; ++i){
			if(t==0) cin >> inp1[i].x >> inp1[i].y;
			else cin >> inp2[i].x >> inp2[i].y;
		}
	}
	for(int i = 0; i != n; ++i){
		for(int j = 0; j != n; ++j) {
			sumdw[idx].x = inp1[i].x + inp2[j].x;
			sumdw[idx].y = inp1[i].y + inp2[j].y;
			idx++;
		}
	}
	qsort(sumdw, idx, sizeof(sumdw[0]), cmp);
	for(int i = 0; i != idx; ++i) dbg2(sumdw[i].x, sumdw[i].y);
	return 0;
}