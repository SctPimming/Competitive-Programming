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

int main(){
	int coin[5] = {100, 20, 10, 5};
	int money = input(), idx = 0, ans = 0;
	while(idx <= 3) {
	  if(coin[idx] <= money){
	  	int num = money/coin[idx];
	  	ans += num;
	  	money -= (num*coin[idx]);
	  }
	  else idx++;
	}
	ans += money;
	output(ans);
}