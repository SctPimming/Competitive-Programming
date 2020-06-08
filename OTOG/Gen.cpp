#include<bits/stdc++.h>
using namespace std;
using lli = long long;
using pii = pair<int, int>;

#define rep(i,k,n) for(int i=(k); i != int(n); ++i)
#define sz(x) x.size()

#define dbg(x) cout << #x << '=' << x << '\n'
#define dbg2(x, y) cout << #x << '=' << x << ' ' << #y << '=' << y << '\n' 

#define input() (*istream_iterator<int>(cin))
#define strin() (*istream_iterator<string>(cin))
#define output(x) cout << x << '\n' 

int main(){
    ios::sync_with_stdio(false);
    string str = "0111010111";
    reverse(str.begin(), str.end());
    int n = 10, k = 6;
    for(int msk = 0; msk < (1 << 10); ++msk){
        if(__builtin_popcount(msk) == k){
            bitset<10> val (str);
            vector<int> ans;
            for(int i = 0; i < 10; ++i){
                if(val[i]) {
                    ans.push_back(i);
                    for(int j = i; j < 10; ++j) val.flip(j);
                }
            }
            if(val.all()){
                for(int dx: ans) cout << dx << " ";
                break;
            }
        }
    }
}