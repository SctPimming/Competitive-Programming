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

int main(){
    int t = input();
    while(t--){
        int n = input(), iscon = false;
        vector<int> skill;
        rep(i, 0, n) skill.push_back(input());
        sort(all(skill));
        rep(i, 0, n-1) if(skill[i]+1 == skill[i+1]) iscon = true;
        (iscon) ? cout << "2\n" : cout << "1\n";
    }
    return 0;
}