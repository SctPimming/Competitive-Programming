#include<bits/stdc++.h>
using namespace std;
using lli = long long;
using pii = pair<int, int>;

#define rep(i,k,n) for(int i=(k); i != int(n); ++i)
#define sz(x) x.size()
#define all(x) x.begin(), x.end()

#define dbg(x) cout << #x << '=' << x << '\n'
#define dbg2(x, y) cout << #x << '=' << x << ' ' << #y << '=' << y << '\n' 

#define input() (*istream_iterator<int>(cin))
#define strin() (*istream_iterator<string>(cin))
#define output(x) cout << x << '\n' 

int main(){
    ios::sync_with_stdio(false);
    int t = input();
    while(t--){
        int n = input(), ans = 0;
        vector<int> arr(n+1, 0), pre(n+1, 0);
        for(int i = 1, inp; i <= n; ++i){
            cin >> inp;
            pre[i] += inp + pre[i-1];
            arr[inp]++;
        }
        for(int l = 1; l <= n; ++l){
            for(int r = l+1; r <= n; ++r){
                int sum = pre[r] - pre[l-1];
                if(sum <= n) {
                    ans += arr[sum];
                    arr[sum] = 0;
                }
            }
        }
        cout << ans << "\n";
    }
}