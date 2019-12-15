#include <bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;
using lli = long long int;
const lli mxn = 1e18;

#define rep(i,k,n) for(int i=(k);i!=int(n);++i)
#define sz(x) x.size()
#define all(x) x.begin(),x.end()
#define dbg(x) cout << "debug :" << x << "\n"
#define dbg2(x,y) cout << "debug :" << x << ":" << y << "\n"
#define input() (*istream_iterator<int>(cin))
#define strin() (*istream_iterator<string>(cin))
#define output(x) cout << x

int main(){
	/* 
	a+b = s --> a + m/a = s --> a is in di
	ab = m --> b = m/a 
	15826 62615533
	*/

	lli sum, product;
	cin >> sum >> product;
	lli l = 0, r = product;
	while(l <= r) {
	  lli mid = (l+r)/2;
	  dbg(mid);
	  if(mid > sum){
	  	r = mid - 1;
	  	dbg("fuck");
	  	continue;
	  }
	  lli mid2 = sum - mid;
	  lli res = mid*mid2;
	  if((product % mid == 0) and (product % mid2 == 0)){
	  	cout << mid << " " << mid2;
	  	return 0;
	  }
	  if(res > product) r = mid-1;
	  else l = mid+1;
	}
	output("Goodbye T-T");
	return 0;
}