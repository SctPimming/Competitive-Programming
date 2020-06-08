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
        int n0 = input(), n1 = input(), n2 = input();
        if(n1 == 0){
            if(n0 > 0) cout << string(n0+1, '0') << "\n";
            else cout << string(n2+1, '1') << "\n";
        }
        else{
            string ans;
            ans += string(n2+1, '1');
            ans += string(n0, '0'); 
            for(int i = 0; i < n1; ++i) {
                char ch = (i%2)+'0';
                ans.push_back(ch);
            }
            cout << ans << "\n";
        } 
    }
}