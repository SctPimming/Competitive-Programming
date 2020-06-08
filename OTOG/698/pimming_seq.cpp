#include<bits/stdc++.h>
using namespace std;
const int mxfib = 1100, mxn = 1e6, mxs = 300;

string add(string a, string b){
    string res;
    int carry = 0;
    for(int i = 0; i != mxs; ++i){
        int u = a[i]-'0', v = b[i]-'0';
        int sum = u + v + carry;
        int r = sum%10;
        carry = sum/10;
        res.push_back(r+'0');
    }
    return res;
}

vector<string> fibo(mxfib, string(mxs, '0'));
int main(){
    //freopen("10.in", "r", stdin);
    //freopen("10.sol", "w", stdout);
    fibo[1][0] = '1';
    fibo[2][0] = '1';
    string a = fibo[1], b = fibo[2];
    for(int i = 3; i != mxfib; ++i){
        fibo[i] = add(a, b);
        a = b;
        b = fibo[i];
    }
    int t;
    cin >> t;
    for(int i = 0, q; i != t; ++i){
        cin >> q;
        string res = fibo[int(floor(sqrt(q-1))) + 2];
        reverse(res.begin(), res.end());
        cout << res.erase(0, min(res.find_first_not_of('0'), res.size()-1)) << "\n";
    }
    return 0;
}