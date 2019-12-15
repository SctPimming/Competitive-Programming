#include <bits/stdc++.h>
using namespace std;

using pii = pair<int, int>;
using lli = long long int;

#define rep(i,k,n) for(int i=(k);i!=int(n);++i)
#define sz(x) x.size()
#define all(x) x.begin(),x.end()
#define dbg(x) cout << "debug :" << x << '\n'
#define dbg2(x,y) cout << "debug :" << x << ':' << y << '\n'
#define input() (*istream_iterator<int>(cin))
#define strin() (*istream_iterator<string>(cin))
#define output(x) cout << x << '\n' 

int main(){
    int s1, s2, s3;
    int f1, f2, f3;
    int r1, r2, r3;
    scanf("%d:%d:%d", &s1, &s2, &s3);
    scanf("%d:%d:%d", &f1, &f2, &f3);
    r3 = f3-s3;
    if(r3 < 0){
        f2--;
        r3 += 60;
    }
    r2 = f2-s2;
    if(r2 < 0){
        f1--;
        r2 += 60;
    }
    r1 = f1-s1;
    if(r1 < 0){
        r1 += 24;
    }
    if(r1 ==0 and r2 == 0 and r3==0) r1 = 24;
    printf("%.2d:%.2d:%.2d", r1, r2, r3);
    return 0;
}

//23:59:59
//23:58:58
