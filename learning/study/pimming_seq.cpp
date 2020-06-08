#include<bits/stdc++.h>
using namespace std;
const int mxfib = 1e2, mxn = 1e3;
int main(){
    vector<long long int> fibo(mxfib);
    long long int a = 1, b = 1;
    fibo[1] = 1;
    fibo[2] = 1; 
    for(int i = 3; i != 70; ++i){
        fibo[i] = a + b;
        printf("%lld\n", fibo[i]);
        a = b;
        b = fibo[i];
    }
    vector<int> sol1(mxn), sol2(mxn);
    map<int, int> mp;
    for(int i = 1; i != mxn; ++i) {
        sol2[i] = fibo[int(floor(sqrt(i-1))) + 2];
        mp[sol2[i]]++;
    }
    for(auto itr = mp.begin(); itr != mp.end(); ++itr){
        cout << itr->first << " " << itr->second << "\n";
    }
    
}