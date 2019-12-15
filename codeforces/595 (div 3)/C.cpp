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

vector<lli> p3;

void init(){
    p3.push_back(1);
    rep(i, 1, 39) p3.push_back(p3[i-1]*3);
}

int main(){
    int t = input();
    init();
    lli num;
    while (t--){
        cin >> num;
        bool use2 = false, spe = false;
        lli tmp = num, mod, res;
        vector <lli> digit;
        while (tmp > 2){
            mod = tmp%3;
            if(mod == 2) use2 = true;
            digit.push_back(mod);
            tmp/=3;
        }
        digit.push_back(tmp);
        if(use2) {
            lli mxc = 0, res = 0;
            rep(i, 0, sz(digit)) {
                if(digit[i] >= 2) {
                    if(i == sz(digit) - 1) {
                        cout << p3[i+1] << "\n";
                        spe = true;
                    }
                    else{
                        mxc = i;
                        digit[i] = 0;
                        digit[i+1]++;
                    }
                }
            }
            if(not spe){
                rep(i, mxc, sz(digit)) res += digit[i]*p3[i];
                cout << res << "\n";
            }
        }
        else if(tmp == 2) cout << *lower_bound(all(p3), num) << "\n";
        else cout << num << "\n";
    }
    
    return 0;
}
//999999999999999999