#include<bits/stdc++.h>
using namespace std;
const int mxq = 5010;

struct bro{
    int x, y, r;
};
bro pos[mxq];

int dist(int x1, int x2, int y1, int y2){
    return abs(x1 - x2) + abs(y1 - y2);
}

int main(){
    int n, m, q;
    scanf("%d%d%d", &n, &m, &q);
    for(int i = 0; i != q; ++i) scanf("%d%d%d", &pos[i].x, &pos[i].y, &pos[i].r);
    for(int x = 0; x != n; ++x){
        for(int y = 0; y != m; ++y){
            if(dist(x, pos[0].x, y, pos[0].y) == pos[0].r){
                int sw = 1;
                for(int i = 1; i < q; ++i){
                    bro cur = pos[i];
                    if(dist(x, cur.x, y, cur.y) != cur.r){
                        sw = 0;
                        break;
                    }
                }
                if(sw == 1){
                    cout << x << " " << y << "\n";
                    return 0;
                }
            }
        }
    }
}