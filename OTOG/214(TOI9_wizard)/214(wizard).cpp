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
const int mxn = 910, hsz = 1e9+7;
const int mnp = -1e8, mxp = 1e8;
const int magic1 = 19, magic2 = 91;

struct coor{
	int x, y;
};
coor hash_table[hsz];
coor sumup[mxn*mxn], sumdw[mxn*mxn];
coor inp1[mxn], inp2[mxn];

void init(){
	for(int i = 0; i != hsz; ++i)
	hash_table[i].x = hash_table[i].y = mxp+10;
}
bool is_empty(int x, int y){
	if(hash_table[idx].x == mxp+10 and hash_table[idx].x == mxp+10) return true;
	return false;
}
int gen(int x, int y){
	int idx = (x*magic1) + (y*magic2);
	if(idx > hsz) idx %= hsz;
	return idx;
}
void Hash(int x, int y){
	int idx = gen(x, y);
	while(not is_empty(x, y)) idx = gen(x, y);
	hash_table[idx].x = x;
	hash_table[idx].y = y;
}
int main(){
	init();
	int dx = input(), dy = input();
	int n = input(), idx = 0;
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
	//qsort(sumdw, idx, sizeof(sumdw[0]), cmp);
	//for(int i = 0; i != idx; ++i) dbg2(sumdw[i].x, sumdw[i].y);
	for(int i = 0; i != idx; ++i) Hash(sumdw[i].x, sumdw[i].y);
	for(int i = 0; i != idx; ++i){
		int keyx = dx-sumup[i], keyy = dy-sumup[y];
		
	}
	return 0;
}