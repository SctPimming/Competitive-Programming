#include<bits/stdc++.h>
using namespace std;
using lli = unsigned long long;
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
        int n = input();
        if(n%4 == 0){
            cout << "YES\n";
            for(int i = 2; i <= n; i+=2) cout << i << " ";
            for(int i = 1; i < n/2; ++i){
                lli cur = (2*(i-1))+1;
                cout << cur << " ";
            }
            cout << n+(n/2)-1 << "\n";
        }
        else cout << "NO\n";
    }
}

