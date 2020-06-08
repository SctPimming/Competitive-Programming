#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7, mxn = 1e4;
int dp[mxn][2];

int add(int &a, int b){
    a = (a+b)%mod;
}
int main(){
    int n, k, d;
    cin >> n >> k >> d;
    for(int i = 1; i <= k; ++i){
        if(i >= d) dp[i][1] = 1;
        else dp[i][0] = 1;
    }
    for(int i = 1; i <= n; ++i){
        for(int j = 0; j <=1; ++j){
                for(int p = 1; p <= k; ++p){
                    if(p >= d or j == 1) add(dp[i+p][1], dp[i][j]);
                    else add(dp[i+p][0], dp[i][j]);
                }
        }
    }
   cout << dp[n][1];
}