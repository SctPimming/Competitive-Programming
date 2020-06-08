#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7, mxn = 1e4;
int dp[mxn][2];
int n, k, d;
int count(int success, int sum){
    if(sum > n) return 0;
    if(sum == n and success){
        cout << success << " " << sum << '\n';
    }
    for(int i = 1; i < d; ++i) return count(false, sum+i);
    for(int i = d; i <= k; ++i) return count(true, sum+i);
}
int main(){
    cin >> n >> k >> d;
    cout << count(false, 0);
}