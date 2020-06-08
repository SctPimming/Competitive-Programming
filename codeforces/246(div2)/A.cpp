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
    int n = input(), k = input();
    vector<int> v;
    for(int i = 0; i != n; ++i) v.push_back(input());
    for_each(all(v), [=](int &i){i+=k;});
    int active = count_if(all(v), [](int i){return i <= 5;});
    cout << active/3;
}