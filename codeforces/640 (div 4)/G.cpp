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
        int n = input();
        if(n < 4) cout << -1 << "\n";
        else if(n == 4) cout << "3 1 4 2\n";
        else{
            int last, num = 0;
            for(int i = (n%2) ? 2 : 1; i < n; i+=2) {
                last = i;
                num++;
                cout << last << " ";
            }
            last -= 3;
            cout << last << " ";
            last += 4;
            cout << last << " ";
            last -= 2;
            cout << last << " ";
            num += 3;
            for(last = last - 4; num < n; last-=2, num++) cout << last << " ";
            cout << "\n";
        }
    }
}