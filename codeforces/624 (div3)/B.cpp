#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n, m;
        cin >> n >> m;
        vector<int> a(n), p(n);
        for(int i = 0; i != n; ++i) cin >> a[i];
        for(int i = 0, pos; i != m; ++i){
            cin >> pos;
            p[pos-1] = 1;
        }
        while(true){
            bool can_fix = false;
            for(int i = 0; i != n; ++i){
                if(a[i] > a[i+1] and p[i]){
                    can_fix = true;
                    swap(a[i], a[i+1]);
                }
            }
            if(not can_fix) break; 
        }
        if(is_sorted(a.begin(), a.end())) printf("YES\n");
        else printf("NO\n");
    }
    
}