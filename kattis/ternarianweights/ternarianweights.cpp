#include<bits/stdc++.h>
using namespace std;
using lli = long long;
using pii = pair<int, int>;

#define sz(x) x.size()
#define all(x) x.begin(), x.end()

#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))

#define dbg(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }

void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
    cerr << *it << '=' << a << endl;
    err(++it, args...);
}

#define input() (*istream_iterator<int>(cin))
#define strin() (*istream_iterator<string>(cin))

int main(){
    ios::sync_with_stdio(false);
    int t = input();
    vector<int> three;
    for(int i = 1, tmp = 1; i <= 19; ++i, tmp *= 3) three.push_back(tmp);
    while(t--){
        int n = input(), pad = 0;
        vector<int> pan[2], check(19, 0);
        while(n > 0){
            int idx = upper_bound(all(three), n) - three.begin();
            int l = three[idx-1], r = three[idx];
            if(check[idx-1]) l = -100;
            if(check[idx]) r = INT_MAX;
            if(n - l < r - n){
                pan[pad].push_back(l);
                check[idx-1] = true;
                n = n - l;
            }
            else{
                pan[pad].push_back(r);
                check[idx] = true;
                n = r - n;
                pad ^= 1;
            }
        }
        cout << "left pan: ";
        for(int cur: pan[1]) cout << cur << " ";
        cout << "\nright pan: ";
        for(int cur: pan[0]) cout << cur << " ";
        cout << "\n";

    }
    return 0;
}