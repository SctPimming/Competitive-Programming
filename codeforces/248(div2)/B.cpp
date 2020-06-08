#include<bits/stdc++.h>
using namespace std;
using lli = long long int;
int main(){
    int n, m;
    cin >> n;
    vector<lli> arr(n+1), sorted_arr(n+1);
    arr[0] = sorted_arr[0] = 0;
    for(int i = 1; i <= n; ++i){
        cin >> arr[i];
        sorted_arr[i] = arr[i];
    }
    sort(sorted_arr.begin(), sorted_arr.end());
    partial_sum(arr.begin(), arr.end(), arr.begin());
    partial_sum(sorted_arr.begin(), sorted_arr.end(), sorted_arr.begin());
    cin >> m;
    for(int i = 0, type, l, r; i != m; ++i){
        cin >> type >> l >> r;
        if(type == 1) cout << arr[r]-arr[l-1] << "\n";
        else cout << sorted_arr[r]-sorted_arr[l-1] << "\n";
    }    
}