#include <bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;

template <typename T>
bool cmp(T &a, T &b){
	return a.first > b.first;	
}
/*bool cmp(const pii &a, const pii &b){
	return a.first > b.first;
}*/
int main(){
	priority_queue<pii, vector<pii> , greater<pii>> pq;
	pq.push({5, 10});
	pq.push({1, 19});
	pq.push({10, 23});
	while(! pq.empty()){
	}
}