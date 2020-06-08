#include<bits/stdc++.h>
using namespace std;
using lli = long long;
const int mx = 1e9;
vector<lli> prep;
int main(){
    prep.push_back(2);
    lli val = 0;
    for(int h = 1; val <= mx; ++h) {
        val = prep[h-1] + (3*(h+1)) - 1;
        prep.push_back(val);
    }
    int t;
    cin >> t;
    while(t--){
        int n, cnt = 0;
        cin >> n;
        while(n > 1){
            auto itr = upper_bound(prep.begin(), prep.end(), n);
            int idx = itr - prep.begin() - 1;
            n -= prep[idx];
            cnt++;
        }
        cout << cnt << "\n";
    }
}