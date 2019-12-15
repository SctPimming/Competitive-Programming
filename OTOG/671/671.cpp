#include <bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;
using lli = long long int;

#define rep(i,k,n) for(int i=(k);i!=int(n);++i)
#define sz(x) x.size()
#define all(x) x.begin(),x.end()
#define dbg(x) cout << "debug :" << x << "\n"
#define dbg2(x,y) cout << "debug :" << x << ":" << y << "\n"
#define input() (*istream_iterator<int>(cin))
#define strin() (*istream_iterator<string>(cin))
#define output(x) cout << x << "\n"

int main(){
	string type[3];
	type[0] = "Alkane", type[1] = "Alkene", type[2] = "Alkyne";
	int n;
	scanf("%d", &n);
	int c,h;
	rep(i, 0, n){
		scanf(" %*c %d %*c %d", &c, &h);
		h/=2;
		(h==c) ? output(type[1]) : ((h>c) ? output(type[0]) : output(type[2]));
	}
}