#include <bits/stdc++.h>
using namespace std;

const int mxc = 30;



int main(){

    vector<set<int>> pos(mxc);
    string str;
    int q;
    int cmd, l, r, idx;
    char ch;
    cin >> str;
    cin >> q;
    for(int i = 0; i != str.size(); ++i) pos[str[i] - 'a'].insert(i);
    for(int i = 0; i != q; ++i){
        cin >> cmd;
        if(cmd == 1){
            cin >> idx >> ch;
            idx--;
            pos[str[idx] - 'a'].erase(idx);
            str[idx] = ch;
            pos[str[idx] - 'a'].insert(idx);
        }
        else{
            cin >> l >> r;
            l--;
            r--;
            int cnt = 0;
            for(int j = 0; j != 26; ++j){
                auto itr = pos[j].lower_bound(l);
                if(itr != end(pos[j]) and *itr <= r) cnt++;
            }
            cout << cnt << "\n";
        }
    }
}
