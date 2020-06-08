#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int type[3], sw = 0; // rock scissor paper
        cin >> type[0] >> type[1] >> type[2];
        int one = count(type, type+3, 1), zero = count(type, type+3, 0);
        if(zero == 0) sw = 1;
        else if(zero == 1){
            if(one == 2) sw = 1;
            else if(one == 1){
                int one_idx = 0, win_idx = 0;
                for(int i = 0; i != 3; ++i){
                    if(type[i] == 1) one_idx = i;
                }
                win_idx = (one_idx == 0) ? 2 : one_idx - 1;
                if(type[win_idx] == 0) sw = 1;
            }
        }
        else if(zero == 2 and one == 1) sw = 1;
        (sw == 0) ? printf("NO\n") : printf("YES\n");
    }
}