#include<bits/stdc++.h>
using namespace std;
const int mxm = 1e9;
string itos (int a){
    string res;
    int mod = mxm;
    while (mod > 0){
        int val = (a/mod);
        if(val > 0) res.push_back(val+'0');
        a = a%mod;
        mod/=10;
    }
    return res;
}
int main(){
    int a, b, res, ans;
    cin >> a >> b;
    res = a + b;

    string sa = itos(a), sb = itos(b), sres = itos(res); 
    a = stoi(sa), b = stoi(sb), res = stoi(sres);
    //cout << a << " " << b << " " << res << "\n";
    (a + b == res) ? puts("YES") : puts("NO");
    return 0;
    
}