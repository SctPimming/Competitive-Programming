#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1, str2;
    cin >> str1 >> str2;
    if(str1.size() == str2.size()){
        if(str1 == str2) cout << -1;
        else cout << str1.size();
    }
    else cout << max(str1.size(), str2.size());
}