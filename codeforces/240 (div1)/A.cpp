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
    int n = input(), k = input();
    int times = n/2;
    vector<int> ans;
    if(n == 1){
        if(k > 0) puts("-1");
        else puts("1");

        return 0;
    }
    if(times > k) puts("-1");
    else{
        int left = k-times+1;
        ans.push_back(left);
        ans.push_back(left*2);
        for(int i = 1; i < times; ++i){
            ans.push_back(2*(left+i));
            ans.push_back(2*(left+i)+1);
        }
        if(n%2 == 1){
            int mx = *max_element(all(ans));
            ans.push_back(mx+1);
        }
    }
    for(int cur: ans) cout << cur << ' ';
}