#include<bits/stdc++.h>
using namespace std;
using lli = long long int;
const int mxn = 2e5+10;
int energy[mxn];
lli dp[mxn];
int main(){
    int n;
    cin >> n;
    for(int i = 0; i != n; ++i) cin >> energy[i];
    for(int p = 0; i < p; ++i){
        for(lli k = 1; p + k <= n; k*=2){
            dp[p+k] = max(dp[p+k], dp[p] + (k*energy[p])); // เปรียบเทียบว่าถ้าเดินไปตอนนี้จะดีกว่าที่เคยมีมั้ย
        }
    }   
    cout << dp[n];
    return 0;
}