#include<bits/stdc++.h>
using namespace std;
using lli = long long;
using pii = pair<int, int>;

#define sz(x) x.size()
#define all(x) x.begin(), x.end()

#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))

#define dbg(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }

void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
    cerr << *it << '=' << a << endl;
    err(++it, args...);
}

#define input() (*istream_iterator<int>(cin))
#define strin() (*istream_iterator<string>(cin))

int main(){
    ios::sync_with_stdio(false);
    int guess = 1, N = (1<<30);
    int inp[10];

    memset(inp, 19, N);
    for(int i = 0; i >= 0 ; i++) {
        int *ptr = new int[1];
        inp[i] = 23;
    }
    int *ptr = &guess;
    dbg(ptr, *ptr);
    memcpy(ptr, inp, 10);
    dbg(ptr, *ptr);
    //printf("%d", ptr);
    //dbg(guess);
    return 0;
}