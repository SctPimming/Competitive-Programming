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
    int t = input();
    while(t--){
        int n = input(), sw = false;
        string num = strin();
        string n1, n2;
        for(int i = 0; i != n; ++i){
            char ch = num[i];
            if(ch == '0'){
                n1.push_back('0');
                n2.push_back('0');
            }
            if(ch == '1'){
                if(sw){
                    n1.push_back('0');
                    n2.push_back('1');
                }
                else{
                    n1.push_back('1');
                    n2.push_back('0');
                    sw = true;
                }
            }
            if(ch == '2'){
                if(sw){
                    n1.push_back('0');
                    n2.push_back('2');
                }
                else{
                    n1.push_back('1');
                    n2.push_back('1');
                }
            }
        }
        cout << n1 << "\n" << n2 << "\n";
    }
}