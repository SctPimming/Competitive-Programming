#include<bits/stdc++.h>
using namespace std;
map<int, int> mp;

bool check_legs(){
    bool legs = false;
    int k = -1;
    for(auto& [key, val] : mp){
        if(val >= 4){
            legs = true;
            if(val == 4) k = key;
            else val -= 4;
        }
    }
    mp.erase(k);
    return legs;
}
bool is_bear(){ 
    if(mp.size() == 2) return true;
    else return false;
}
bool is_elephant(){
    if(mp.size() == 1) return true;
    else return false;
}
int main(){
    for(int i = 0; i != 6; ++i){
        int inp;
        cin >> inp;
        mp[inp]++;
    }

    if(check_legs() == false) puts("Alien");
    else if(is_elephant()) puts("Elephant");
    else if(is_bear()) puts("Bear");
}