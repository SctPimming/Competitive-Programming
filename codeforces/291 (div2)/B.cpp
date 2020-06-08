#include<bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;
set<pii> trooper;
pii edit(int x, int y){
    int gcd = __gcd(x, y);
    return {x/gcd, y/gcd};
}
int main(){
    int n, x0, y0, inf = 0;
    cin >> n >> x0 >> y0;
    for(int i = 0; i != n; ++i){
        int x, y;
        cin >> x >> y;
        int dx = x-x0, dy = y-y0;
        pii point = edit(dx, dy);
        trooper.insert(point);
    }
    cout << trooper.size();
}