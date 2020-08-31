#include<bits/stdc++.h>
using namespace std;
using lli = long long;
using pii = pair<int, int>;

#define rep(i,k,n) for(int i=(k); i != int(n); ++i)
#define sz(x) x.size()
#define all(x) x.begin(), x.end()

#define dbg(x) cerr << #x << '=' << x << '\n'
#define dbg2(x, y) cerr << #x << '=' << x << ' ' << #y << '=' << y << '\n' 

#define input() (*istream_iterator<int>(cin))
#define strin() (*istream_iterator<string>(cin))

const int mxn = 12400;
struct point{
    int x, y;
};

int main(){
    int n;
    point city[mxn];
    int sum[mxn]{0}, flag[mxn]{0};
    int fan_gain, cur = 0, mx, mx_idx;
    scanf("%d", &n);
    rep(i, 0, n)
        scanf("%d %d", &city[i].x, &city[i].y);
    rep(cnt, 0, n-1){
        mx = 0;
        flag[cur] = 1;
        rep(nx, 0, n){
            fan_gain = max(abs(city[cur].x - city[nx].x), abs(city[cur].y - city[nx].y));
            if(flag[nx] == 0){
                sum[nx] = max(fan_gain, sum[nx]);
                if(sum[nx] > mx){
                    mx = sum[nx];
                    mx_idx = nx;
                }    
            } 
        }
        cur = mx_idx;
    }
    printf("%d", accumulate(sum, sum+n, 0));
    return 0;
}