#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int a, b;
        cin >> a >> b;
        int diff = b-a;
        if(diff == 0) printf("0\n");
        else if(diff > 0){
            if(diff&1) printf("1\n");
            else printf("2\n");
        }
        else if(diff < 0){
            if(diff&1) printf("2\n");
            else printf("1\n");
        }
    }
    return 0;
    
}