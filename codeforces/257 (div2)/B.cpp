#include<bits/stdc++.h>
using namespace std;
using lli = long long;
const lli mod = 1e9+7;
//f1 = x
//f2 = y 
//f3 = f2 - f1 = y -x
//f4 = f3 - f2 = (y - x) - y = -x
//f5 = f4 - f3 = -x - (y - x) = -y
//f6 = f5 - f4 = -y - (-x) = x-y
//f7 = f6 - f5 = x - y - (-y) = x
//f8 = f7 - f6 = x - (x - y) = y
//f9 = f8 - f7 = y - x
//...
int main(){
    lli x, y, n, ans;
    cin >> x >> y;
    cin >> n;
    lli sol[6] = {x, y, y-x, -x, -y, x-y};
    n--;
    n = n%6;
    ans = sol[n];
    while(ans < 0) ans += mod;
    cout << ans%mod;
}