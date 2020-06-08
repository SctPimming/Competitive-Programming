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
        vector<int> type, ans(n, 0);
        queue<int> q;
        rep(i, 0, n) type.push_back(input());
        ans[0] = 1;
        q.push(0);
        while(not q.empty()){
            int cur = q.front();
            dbg(cur);
            int nx1 = cur+1, nx2 = (cur == 1)? n-1 : cur-1;
            q.pop();
            if(ans[nx1] == 0){
                ans[nx1] = (type[nx1] == type[cur]) ? ans[cur] : (ans[cur]+1)%3;
                q.push(nx1);
            }
            if(ans[nx2] == 0){
                ans[nx2] = (type[nx2] == type[cur]) ? ans[cur] : (ans[cur]+1)%3;
                q.push(nx2);
            }
        }
        for(int dx: ans) cout << dx << " ";
        cout << "\n";
    }
}