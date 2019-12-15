#include <bits/stdc++.h>
#define fi first
#define se second
#define rep(i,k,n) for(int i=(k);i!=int(n);++i)
#define sz(x) x.size()
#define all(x) x.begin(),x.end()
#define dbg(x) cout << "debug :" << x << endl;
#define dbg2(x,y) cout << "debug :" << x << ":" << y << endl;
#define input() (*istream_iterator<int>(cin))
#define str_in() (*istream_iterator<string>(cin));
#define spc " "
#define ln "\n"

using namespace std;
using pii = pair<int, int>;
const int mxn = 1e5+10;
std::vector<int> v(mxn, 0), qsum;

void sol1(int n, int gold, int idx){ //brute force sum + k -> O(qn^2)
	int lim = (n-idx >= idx-1) ? idx-1 : n-idx;
	int ans;
	rep(k, 0, lim+1){
		int l = idx-k, r = idx+k, sum = 0;
		rep(i, l, r+1) sum += v[i];
		if(sum > gold){
			ans = k-1;
			break;
		}
		if(l <= 1 or r >= n){
			ans = k;
			break;
		}
	}
	int sum = 0;
	rep(i, idx-ans, idx+ans+1) sum += v[i];
	//cout << "sol1 : ";
	cout << ans << spc << (gold-sum) << ln;
}
void sol1r(int n, int gold, int idx){
	int lim = (n-idx >= idx-1) ? idx-1 : n-idx;
	int ans;
	for (int k = lim; k != -1; --k){
		int l = idx-k, r = idx+k, sum = 0;
		rep(i, l, r+1) sum += v[i];
		if(sum <= gold){
			ans = k;
			break;
		}
		if(l == idx or r == idx){
			ans = k;
			break;
		}
	}
	int sum = 0;
	rep(i, idx-ans, idx+ans+1) sum += v[i];
	//cout << "sol1r : ";
	cout << ans << spc << (gold-sum) << ln;	
}
void sol2(int n, int gold, int idx){ // qsum + brute force k -> O(n + qn)
	int lim = (n-idx >= idx-1) ? idx-1 : n-idx;
	int ans, psum;
	rep(k, 0, lim+1){
		int l = idx-k, r = idx+k;
		int sum = qsum[r] - qsum[l-1];
		if(sum > gold){
			ans = k-1;
			break;
		}
		if(l <= 1 or r >= n){
			ans = k;
			break;
		}
	}
	int sum = qsum[idx+ans] - qsum[idx-ans-1];
	//cout << "sol2 : ";
	cout << ans << spc << (gold-sum) << ln;
}

void sol3(int n, int gold, int idx){ //qsum + binary search for k -> O(n + qlogn)
	int lim = min(idx-1, n-idx);
	int l = 0, r = lim, k, tmp=0;
	while(l < r){
		k = l + (r-l+1)/2;
		int lb = idx-k, rb = idx+k; // left bound and right bound
		int sum = qsum[rb] - qsum[lb-1]; 
		if (sum > gold) r = k-1;
		else {
			l = k;
			//tmp = max(k, tmp);
		}  
	}
	k = l;
	//k = max(k-1, tmp);
	int sum = qsum[idx+k] - qsum[(idx-k)-1];
	//cout << "sol3 : ";
	cout << k << spc << (gold-sum) << ln;
}

int main(){
	freopen("3.in", "r", stdin);
	//freopen("10.sol", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n = input(), g = input(), q = input();
	qsum.push_back(0);
	rep(i, 0, n) {
		cin >> v[i+1];
		qsum.push_back(v[i+1]);
	}
	rep(i, 1, n+1) qsum[i] += qsum[i-1];
	while(q--){
		//dbg(q);
		int choose = input();
		int lim = min(choose-1, n-choose);
		(lim > n/4) ? sol1r(n, g, choose) : sol1(n, g, choose);
		//sol1(n, g, choose);
		//sol1r(n, g, choose);
		//sol2(n, g, choose);
		//sol3(n, g, choose);
	}
	return 0;
}