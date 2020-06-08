//sol 1 : Pruning + Hashing + Bitmasking
#include<bits/stdc++.h>
using namespace std;
const int mxc = 5, mxr = 6, mxn = 35, mxlen = 5;
string key[mxn] = {"about", "after", "again", "below", "could",
"every", "first", "found", "great", "house",
"large", "learn", "never", "other", "place",
"plant", "point", "right", "small", "sound",
"spell", "still", "study", "their", "there",
"these", "thing", "think", "three", "water",
"where", "which", "world", "would", "write"};
int main(){
    vector<int> msk(5);
    string inp;
    for(int i = 0; i != mxr; ++i){
        cin >> inp;
        for(int j = 0; j != mxc; ++j){
            char cur = inp[j];
            msk[j] |= (1<<(cur-'a'));
        }
    }
    for(string dx: key){
        bool is_correct = true;
        for(int i = 0; i != mxlen and is_correct; ++i){
            char cur = dx[i];
            is_correct &= ((msk[i] & (1<<(cur-'a')))>0);
        }
        if(is_correct){
            cout << dx;
            break;
        } 
    }
}