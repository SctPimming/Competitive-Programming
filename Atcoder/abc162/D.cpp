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

int msk = 0;
void add(char i){
    if(i == 'R') msk |= (1 << 0);
    else if(i == 'G') msk |= (1 << 1);
    else if(i == 'B') msk |= (1 << 2);
}
int main(){
    ios::sync_with_stdio(false);
    int n = input(), r = 0, g = 0, b = 0;
    string s = strin();
    for(char c: s){
        if(c == 'R') r++;
        else if(c == 'G') g++;
        else b++;
    }
    int ans = r*g*b;
    dbg(ans);
    for(int i = 0; i != n; ++i){
        for(int j = i+1; j != n; ++j){
            msk = 0;
            int k = j-i+j;
            if(i < j and j < k){
                add(s[i]);
                add(s[j]);
                add(s[k]);
                if(msk == 7) {
                    cout << i << " " << j << " " << k << "\n";
                    ans--;
                }
            }
        }
    }
    cout << ans;
}