#include<bits/stdc++.h>
using namespace std;
using lli = long long;
using pii = pair<int, int>;


int main(){
    ios::sync_with_stdio(false);
    map<char, int> alpha;
    map<string, int> beta;
    string str;
    cin >> str;
    for(int i = 0; i != str.size(); ++i){
        if(isupper(str[i])){
            if(islower(str[i+1]))
                beta[str.substr(i, 2)]++;
            else 
                alpha[str[i]]++;
        }
    }
    cout << alpha.size() << "\n";
    for(auto cur : alpha)
        cout << cur.first << " " << cur.second << "\n";
    cout << beta.size() << "\n";
    for(auto cur: beta)
        cout << cur.first << " " << cur.second << "\n";
    return 0;
}
