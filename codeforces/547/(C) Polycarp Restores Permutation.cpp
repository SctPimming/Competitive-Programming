#include <bits/stdc++.h>
using namespace std;

#define rep(i,k,n) for(auto i=(k); i != n; ++i)
#define range(x, n, m) x.begin()+n, x.begin()+m
#define sz(x) x.size()
#define all(x) x.begin(), x.end()
#define dbg(x) cout << "debug :" << x << "\n"
#define dbg2(x,y) cout << "debug :" << x << ":" << y << "\n"
#define qdbg() cout << "Hey listen!" << "\n";
#define input() (*istream_iterator<int>(cin))


using lli = long long int;
const int mxn = 2e5+10;
std::vector<lli> p(mxn, 0) ,q(mxn, 0);
std::unordered_set<lli> check;

bool is_ans(int n){
	rep(i, 0, n) if(p[i] < 1 or p[i] > n) return false;
	if(sz(check) != n) return false;
	return true;
}

int main(){
	int n = input();
	lli mn = 0, sum = 0; // mn is minimumsum of qsum --> qsum[0] = 0 

	rep(i, 0, n-1){
		cin >> q[i];
		//dbg(q[i]);
		sum += q[i];
		mn = min(sum, mn);
	}

	p[0] = 1-mn; // p[i] >= 1 for all i <= n
	check.insert(p[0]); 

	rep(i, 1, n){
		p[i] = p[i-1] + q[i-1];
		//dbg(p[i]);
		check.insert(p[i]);
	}

	if (! is_ans(n)) cout << -1;
	else for_each(range(p, 0, n), [](lli i){ cout << i << " "; });
}

//test case 1 --> ans = 3 1 2
/* 
3
-2 1
*/

//test case 2 --> ans = 1 2 3 4 5
/*
5
1 1 1 1
*/

//test case 3 --> ans = -1
/*
4
-1 2 2
*/

// p1 = p1 
// p2 = p1 + (p2-p1) = p1 + q1
// p3 = p2 + (p3 - p2) = p1 + q1 + q2
// pn = p(n-1) + (pn - p(n-1)) = p1 + q1 + q2 + .. q(n-1)

// but how to find p1? --> for all pi >= 1
// qsum = [0, q1, q1+q2, q1+q2+q3, ...]
// min(qsum) + x must be 1
// then x = 1 - min(qsum) = p0
// then check is_permutation lol
