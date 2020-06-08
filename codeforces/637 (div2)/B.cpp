#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        int h1, h2, h3;
        int mx = -1, idx;
        cin >> n >> k;
        vector<int>peak(n+1);
        cin >> h1 >> h2;
        for(int i = 3; i <= n; ++i){
            cin >> h3;
            if(h3 < h2 and h2 > h1) peak[i-1] = 1;
            h1 = h2;
            h2 = h3;
        }
        partial_sum(peak.begin(), peak.end(), peak.begin());
        for(int r = k, l = 1; r <= n; r++, l++){
            int sum = peak[r-1]-peak[l];
            if(sum > mx){
                mx = sum;
                idx = l;
            }
        }
        cout << mx+1 << " " << idx << "\n"; 
    }
}