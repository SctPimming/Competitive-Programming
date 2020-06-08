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
        string str = strin(); 
        int len = sz(str), cnt = 0;
        for(int i = 0; i != len; ++i){
            char cur = str[i];
            if(cur == '0') continue;
            else cnt++;
        }
        cout << cnt << "\n";
        for(int i = 0; i != len; ++i){
            char cur = str[i];
            if(cur == '0') continue;
            else{
                string ans;
                ans.push_back(cur);
                for(int j = len-1; j > i; j--) ans.push_back('0');
                cout << ans << " ";
            }
        }
        cout << "\n";
    }
}