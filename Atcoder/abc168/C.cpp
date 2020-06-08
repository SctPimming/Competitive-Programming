#include<bits/stdc++.h>
using namespace std;
using lli = long long;
using pii = pair<int, int>;

#define sz(x) x.size()
#define all(x) x.begin(), x.end()

#define dbg(x) cout << #x << '=' << x << '\n'
#define dbg2(x, y) cout << #x << '=' << x << ' ' << #y << '=' << y << '\n' 

#define input() (*istream_iterator<int>(cin))
#define strin() (*istream_iterator<string>(cin))
#define output(x) cout << x << '\n' 

const double pi = M_PI;
int main(){
    ios::sync_with_stdio(false);
    int a, b, h, m;
    cin >> a >> b >> h >> m;
    double angle = 2*pi*((double) h/12.0 + (double) m/720.0 - (double) m/60.0);
    double len = a*a + b*b - (2*a*b*cos(angle));
    printf("%.10f", sqrt(len));
}