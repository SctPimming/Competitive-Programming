#include <bits/stdc++.h>
#define fi first
#define se second
#define rep(i,k,n) for(int i=(k);i!=int(n);++i)
#define sz(x) x.size()
#define all(x) x.begin(),x.end()
#define dbg(x) cout << "debug :" << x << "\n"
#define dbg2(x,y) cout << "debug :" << x << ":" << y << "\n"
#define input() (*istream_iterator<int>(cin))

using namespace std;
const int mxn = 26;
int main() {
  ios::sync_with_stdio(0);
  int t = input();
  rep(i, 0, t){
    std::vector<int> v(mxn, 0);
    string base;
    cin >> base;
    int n = input();
    for(char ch : base) v[ch-'a']++;
    rep(j, 0, n){
      std::vector<int> v1(mxn, 0);
      std::string pat;
      bool sw = true;
      cin >> pat;
      for(char ch : pat) v1[ch-'a']++;
      rep(k, 0, mxn) {
      //dbg2(v[k], v1[k]);
      (v[k] - v1[k] < 0) ? sw = false : sw = sw;
      }
      (sw) ? printf("Yes\n") : printf("No\n");
    }
  }
}
