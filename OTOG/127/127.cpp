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
const int mxn = 1e6+10;
struct Player{
    int id, hp;
    bool operator < (Player tmp) const { 
        if(hp == tmp.hp) return id < tmp.id;
        return hp < tmp.hp;
    }
};
priority_queue<Player> pq;
vector<int> current_hp(mxn);
int main(){
    ios::sync_with_stdio(false);
    int n = input(), m = input(), day = 0;
    for(int id = 1; id <= n; ++id){
        int hp = input();
        pq.push({id, hp});
        current_hp[id] = hp;
    }
    for(int day = 1; day <= m; ++day){
        int type = input();
        if(type == 1){
            int hunter, prey, amount;
            cin >> hunter >> prey >> amount;
            if(current_hp[hunter] - day > 0 and current_hp[prey] - day > 0){
                current_hp[hunter] += min(current_hp[prey], amount);
                prey -= amount;
            }
        }
        else if(type == 2){
            int id, amount;
            cin >> id >> amount;
            if(current_hp[id] - day > 0) current_hp[id] += amount;
        }
        else if(type == 3){
            while(not pq.empty()){
                auto [id, hp] = pq.top();
                if(current_hp[id] - day > 0) break;
                pq.pop();
            }
            if(pq.size() > 0) cout << pq.top().id << " " << current_hp[pq.top().id] - day << "\n";
            else cout << "-1\n";
        }
    }
    return 0;
}