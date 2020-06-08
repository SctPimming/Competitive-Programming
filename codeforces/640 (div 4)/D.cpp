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
    //ios::sync_with_stdio(false);
    int t = input();
    while(t--){
        int n = input();
        vector<int> size;
        rep(i, 0, n) {
            int inp;
            cin >> inp;
            size.push_back(inp);
        }
        int l = 0, r = n-1, last = 0;
        int a = 0, b = 0, turn = 0;
        while(l <= r){
            //Alice turn
            turn++;
            int sum = 0;
            while(sum <= last and l <= r){
                sum += size[l];
                l++;
            }
            a += sum;
            last = sum;
            if(l > r) break;
            //Bob Turn
            turn++;
            sum = 0;
            while(sum <= last and l <= r){
                sum += size[r];
                r--;
            }
            b += sum;
            last = sum;
        }
        cout << turn << " " << a << " " << b << "\n";
    }
}