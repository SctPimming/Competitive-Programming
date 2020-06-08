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
    int a = input(), b = input(), c = input(), d = input();
    int turn = 0;
    while(a > 0 and c > 0){
        if(turn == 0) c -= b;
        else a -= d; 
        turn ^= 1;
    }
    if(a > 0) cout << "Yes\n";
    else cout << "No\n";
}