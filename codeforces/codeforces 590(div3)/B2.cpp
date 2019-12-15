#include<bits/stdc++.h>
using namespace std;

set<int> id;
queue<int> screen;
vector<int> ans;
int main(){
	int n, k;
	int cur, sz;
	cin >> n >> k;

	for(int i = 0; i != n; ++i){
		cin >> cur;
		auto itr = id.find(cur);
		if(itr == id.end()){
			id.insert(cur);
			sz = screen.size();
			if(sz == k) {
				id.erase(screen.front());
				screen.pop();
			}
			screen.push(cur);
		}
	}

	sz = screen.size();
	cout << sz << "\n";
	for(int i = 0; i != sz; ++i){
		ans.push_back(screen.front());
		screen.pop();
	}
	reverse(ans.begin(), ans.end());
	for(int cur_id : ans) cout << cur_id << " ";
	return 0;
}
