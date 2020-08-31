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
    int q = input();
    while(q--){
        int n = input(), two = 0, three = 0;
        if(n == 1){
            cout << "0\n";
            continue;
        }
        while(n > 1){
            //dbg(n);
            if(n%2 == 0){
                n/=2;
                two++;
            }
            else if(n%3 == 0){
                n/=3;
                three++;
            }
            else break;
        }
        if(n != 1 or two > three) cout << "-1\n";
        else cout << three - two + three << "\n";
    }
    return 0;
}