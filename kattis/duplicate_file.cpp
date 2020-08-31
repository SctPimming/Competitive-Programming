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


set<string> st;
int main(){
    int n;
    while(true){
        st.clear();
        cin >> n;
        if(n == 0) break;
        cin >> ws;
        int dup = 0;
        string file_name;
        vector<int> hash_table;
        rep(i, 0, n) {
            getline(cin, file_name);    
            int val = file_name[0];
            for(int idx = 1; idx != sz(file_name); ++idx) val ^= file_name[idx];
            hash_table.push_back(val);
            st.insert(file_name);
        }
        rep(i, 0, n)
            rep(j, i+1, n) if(hash_table[i] == hash_table[j]) dup++;
        cout << sz(st) << " " << dup << "\n";
    }
    return 0;
}