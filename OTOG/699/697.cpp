#include<bits/stdc++.h>
using namespace std;
using lli = unsigned long long int;

int log_power(int a, int b, int c){
    if(b == 0) return 1;
    if(b == 1) return a;
    if(b&1){
        lli res = log_power(a, b/2, c);
        return (res*res*a)%c;
    }
    else {
        lli res = log_power(a, b/2, c);
        return (res*res)%c;
    }
}
// O(log p) if you use divide and conquer
int inv_euler(int a, int p){
    int power = p-2;
    return log_power(a%p, p-2, p);
    // find a^p-2 mod p 
}

// O(p)
int inv_group(int a, int p){
    for(int i = 0; i != p; ++i){
        if ((a*i)%p == 1) return i;
    }
}
// O(log p)
int inv_equation(int a, int p){
    // 35x = 1 (mod 3) --> 35x = 3y + 1 --> 35x - 3y = 1
    // reverse euclidean algorithm
}

int linear(lli r, lli ans, lli mx){
    int cnt = 0;
    for(lli i = ans; i <= r; i += mx) cnt++;
    return cnt;
}

int main(){
    //freopen("10.in", "r", stdin);
    //freopen("10.sol", "w", stdout);
    int n = 8;
    lli l, r, cnt;
    lli mx = 1, ans = 0;
    cin >> l >> r;
    vector<lli> a(n), p(n), m(n), b(n);

    for(int i = 0; i != n; ++i){
        cin >> p[i];
        mx = mx*p[i];
    }
    //cout << mx << "\n";   
    for(int i = 0; i != n; ++i) cin >> a[i];
    for(int i = 0; i != n; ++i) m[i] = mx/p[i];
    for(int i = 0; i != n; ++i) b[i] = inv_group(m[i], p[i]);
    for(int i = 0; i != n; ++i) ans = ((ans%mx) + ((m[i]%mx)*(b[i]%mx)*(a[i]%mx)%mx))%mx;
    //cout << ans << "\n";
    cnt = linear(r, ans, mx);
    cnt == 0 ? cout << "saddo" << "\n" : cout << cnt ;
}