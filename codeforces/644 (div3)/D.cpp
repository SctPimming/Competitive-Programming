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
        int n = input(), k = input(), mx = 1;
        if(n <= k) cout << "1\n";
        else{
            for(int i = 2; i <= sqrt(n); ++i){
                if(n%i == 0){
                    int op = n/i;
                    if(i <= k) mx = max(mx, i);
                    if(op <= k) mx = max(mx, op); 
                    //dbg(mx);
                }
            }
            cout << n/mx << "\n";
        }
    }
}