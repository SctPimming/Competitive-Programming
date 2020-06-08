#include<bits/stdc++.h>
using namespace std;
using lli = long long;
using pii = pair<int, int>;

#define rep(i,k,n) for(int i=(k); i != int(n); ++i)
#define sz(x) x.size()
#define all(x) x.begin(), x.end()

#define dbg(x) cerr << #x << '=' << x << '\n'
#define dbg2(x, y) cerr << #x << '=' << x << ' ' << #y << '=' << y << '\n' 

#define input() (*istream_iterator<int>(cin))
#define strin() (*istream_iterator<string>(cin))
#define output(x) cout << x << '\n' 

int main(){
    ios::sync_with_stdio(false);
    string str;
    getline(cin, str);
    for(int i = 0; i < sz(str); ++i){
        if(str[i] == '"'){
            string args;
            i++;
            while(i < sz(str) and str[i]!='"'){
                args.push_back(str[i]);
                i++;
            }
            cout << '<' << args << '>' << '\n';
        }
        else if(str[i] != ' '){
            string args;
            while(i < sz(str) and str[i] != ' '){
                args.push_back(str[i]);
                i++;
            }
            cout << '<' << args << '>' << '\n';
        }   
    }
}