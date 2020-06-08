#include<bits/stdc++.h>
using namespace std;
const int mxn = 2e5+10;
int arr[mxn];
vector<int> diff;
int main(){
    int n;
    long long ans = 0;
    cin >> n;
    for(int i = 0; i != n; ++i) cin >> arr[i];
    for(int i = 0, inp; i != n; ++i){
        cin >> inp;
        diff.push_back(arr[i] - inp);
    }
    sort(diff.begin(), diff.end());
    for (auto itr = diff.begin(); itr != diff.end(); itr++){
        int idx = itr - diff.begin();
        int cur = -diff[idx];
        auto up = upper_bound(itr+1, diff.end(), cur);
        int dis = (up == diff.end()) ? 0 : n - (up - diff.begin());
        ans += dis;
        //cout << dis << "\n";
    }
    cout << ans;
}