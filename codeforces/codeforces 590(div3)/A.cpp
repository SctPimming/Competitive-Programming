#include <bits/stdc++.h>
using namespace std;

int main(){
    int q;
    int n, cur, sum;
    int new_price;
    cin >> q;
    for(int tc = 0; tc != q; ++tc){
        vector<int> price;
        cin >> n;
        for(int i = 0; i!= n; ++i){
            cin >> cur; 
            price.push_back(cur);
        }
        sum = accumulate(price.begin(), price.end(), 0);
        new_price = (!(sum%n)) ? (sum/n) : (sum/n) + 1;
        cout << new_price << "\n";
    }
}