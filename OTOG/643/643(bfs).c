#include <stdio.h>
#include<stdbool.h>

#define mxn 500010
#define mod 1000033
#define rep(i,k,n) for(int i=(k);i != n;++i)

struct node{
	int num, step;
};

struct node queue[mxn];
int head = 0, tail = 0, sz = 0;
int adj[mod], deg[mxn];
int dist[mxn], hype[mxn];

int hash(int val){
	int magic1 = 19, magic2 = 23;
	int res = val + (magic2*magic1);
	//printf("%d\n", res);
	if(res >= mod) res %= mod;
	return res;
}

void add(int u, int v){ // from u to v
	int idx = hash(u);
	while(adj[idx]!=0) idx = hash(idx);
	adj[idx] = v;
}

void push(int nx, int stp){
	queue[tail].num = nx;
	queue[tail].step = stp;
	tail++;
	sz++;
}

struct node front(){
	return queue[head];
}

void pop(){
	head++;
	sz--;
}

int empty(){
	if (sz == 0) return 1;
		else return 0;
}

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	rep(i, 0, n) scanf("%d", &hype[i+1]);
	rep(i, 0, m){
		int u, v;
		scanf("%d %d", &u, &v);
		if(hype[u] < hype[v]) { // u --> v
			add(u, v);
			deg[v]++;
		}
		else if(hype[v] < hype[u]) { // v --> u
			add(v, u);
			deg[u]++;
		}
	}
	rep(i, 0, n)
		if(deg[i+1] == 0) push(i+1, 1);

	while(!empty()){
		struct node cur = front();
		int cur_num = cur.num, cur_stp = cur.step;
		int nx = hash(cur_num);

		pop();
		//printf("node : %d step : %d\n", cur_num, cur_stp);
		if(cur_stp > dist[cur_num]) dist[cur_num] = cur_stp;

		while(adj[nx] != 0){
			push(adj[nx], cur_stp+1);
			nx = hash(nx);
		}
	}
	int ans = 0;
	rep(i, 0, n)
		if(dist[i+1] > ans) ans = dist[i+1];
	printf("%d\n", ans);
}
/*
5 4 
3 15 17 19 23  
1 2 
2 3 
3 4 
4 5
*/