#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, profit = 0, buy, sell;
    vector<int> price;
    cin >> n;
    for(int i = 0, inp; i != n; ++i){
        cin >> inp;
        price.push_back(inp);
    }

    for(int i = 0; i < n; ++i){
        //buy mode
        while(price[i+1] < price[i] and i+1 < n) i++;
        buy = price[i];
        //sale mode
        while(price[i+1] > price[i] and i+1 < n) i++;
        sell = price[i];
        profit += (sell - buy);
    }
    profit = max(0, profit);
    cout << profit;
}