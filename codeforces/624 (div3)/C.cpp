#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        string str;
        cin >> n >> m;
        cin >> str;
        map<int, int> p;
        vector<int> press(26), ans(26);
        for(int i = 0, pos; i != m; ++i){
            cin >> pos;
            p[pos-1]++;
        }
        p[n-1]++;
        auto itr = p.begin();
        for(int i = 0; i != n and itr != p.end(); ++i){
            char cur = str[i];
            press[cur-'a']++;
            int key = itr -> first, val = itr -> second;
            if(key == i){
                itr++;
                for(int j = 0; j != ans.size(); j++) 
                    ans[j] += (press[j]*val);
            }
        }
        for(int cur : ans) cout << cur << " ";
        printf("\n");
    }
}
