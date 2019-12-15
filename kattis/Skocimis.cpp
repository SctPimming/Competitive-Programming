#include <bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;
using lli = long long int;

#define fi first
#define se second
#define rep(i,k,n) for(int i=(k);i!=int(n);++i)
#define sz(x) x.size()
#define all(x) x.begin(),x.end()
#define dbg(x) cout << "debug :" << x << "\n"
#define dbg2(x,y) cout << "debug :" << x << ":" << y << "\n"
#define input() (*istream_iterator<int>(cin))
#define strin() (*istream_iterator<string>(cin))
#define output(x) cout << x


int main(int argc, char const *argv[]){
	int a, b, c;
	cin >> a >> b >> c;
	int dist1 = c-b, dist2 = b-a;
	(dist1 >= dist2) ? output(--dist1) : output(--dist2);
	return 0;
}