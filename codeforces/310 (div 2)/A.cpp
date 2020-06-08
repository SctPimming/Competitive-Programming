#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, one, zero;
    string str;
    cin >> n;
    cin >> str;
    zero = count(str.begin(), str.end(), '0');
    one= count(str.begin(), str.end(), '1');
    cout << int(abs(zero-one));
}