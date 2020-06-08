#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    for(int i = 1; i <= str.length(); ++i){
        int space = str.length()-i;
        char middle = str[i-1];
        string ans(space,' ');
        string prefix = str.substr(0, i-1);
        ans += prefix+middle;
        reverse(prefix.begin(), prefix.end());
        cout << ans + prefix << "\n";
    }
}