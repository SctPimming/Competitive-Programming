#include <bits/stdc++.h>
using namespace std;

using pii = pair<int, int>;
using lli = long long int;

#define rep(i,k,n) for(int i=(k);i!=int(n);++i)
#define sz(x) x.size()
#define all(x) x.begin(),x.end()
#define dbg(x) cout << "debug :" << x << '\n'
#define dbg2(x,y) cout << "debug :" << x << ':' << y << '\n'
#define input() (*istream_iterator<int>(cin))
#define strin() (*istream_iterator<string>(cin))
#define output(x) cout << x << '\n' 

const int mxn = 110;
vector<int> wall;
int arr[110];
int main(){
    int n = input(), part_num = input();
    wall.push_back(0);
    rep(i, 0, part_num) wall.push_back(input());
    wall.push_back(n);
    for(int i = 0; i != sz(wall); ++i)
        for(int j = i; j != sz(wall); ++j) arr[wall[j] - wall[i]] = 1;
    rep(i, 1, n+1) if(arr[i]) cout << i << " ";
    return 0;
}