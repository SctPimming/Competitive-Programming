#include<bits/stdc++.h>
using namespace std;

//type 1 = 1, 2
//type 2 = 3, 4, 5, 6
// dir 1 = left, 2 = up, 3 = down
string r1, r2;

int get_type(int val){
    return (val <= 2) ? 1 : 2;
}

int inbound(int idx, int n){
    return (idx >= n) ? false : true;
}

int main(){
    int q, n;
    int x = 0, y = 0;
    int cur, pipe_type, dir = 1;
    bool is_com = true;
    cin >> q;
    for(int tc = 0; tc != q; ++tc, x = 0, y = 0, is_com = true, dir = 1){
        cin >> n;
        cin >> r1 >> r2;
        while(is_com){
            //printf("x is %d y is %d\n", x, y);
            if(x == n and y == 1) break;
            int can_go = false;
            if(x > n) {
                is_com = false;
                break;
            }
            if(y == 0){ // top row
                cur = r1[x]-'0'; // change type 
                pipe_type = get_type(cur);
                if(dir == 1){ // from left
                    if(pipe_type == 1) { 
                        x += 1;
                        can_go = true;
                        dir = 1;
                    }
                    else if(pipe_type == 2){
                        y = 1;
                        can_go = true;
                        dir = 3;
                    }
                }
                else if(dir == 2){ // from up
                    if(pipe_type == 2){
                        x += 1;
                        can_go = true;
                        dir = 1;
                    }
                }
            } 
            else{ // second row
                cur = r2[x]-'0';
                pipe_type = get_type(cur);
                if(dir == 1){
                    if(pipe_type == 1) { // go left
                        x += 1;
                        can_go = true;
                    }
                    else if(pipe_type == 2){
                        y = 0;
                        can_go = true;
                        dir = 2;
                    }
                }
                else if(dir == 3){
                    if(pipe_type == 2){
                        x += 1;
                        can_go = true;
                        dir = 1;
                    }
                }
            }
            is_com = can_go;
        }
        (is_com) ? printf("YES\n") : printf("NO\n");
    }
}