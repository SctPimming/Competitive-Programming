#include<iostream>
#include<vector>
using namespace std;

const int mxn = 1000; // ให้ โหนดมากสุดแค่ 1000

std::vector<int> adj[mxn]; // adjacency list

void dfs(int cur){ // cur เป็นตัวปัจจุบันที่อยู่
	cout << "current node is " << cur << endl;
	for(int nx : adj[cur]) {//ไล่ดูลูกทุกตัวของ cur (ชื่อ nx)
		dfs(nx); // เดินไป nx เลย
	}
}
int main(){
	int sz;
	cin >> sz;
	vector<int> v; //ประกาศ vector <type>
	// cout << v[0] << endl; run แล้ว fail เพราะ v[0] ยังไม่มี
	for(int i = 0, inp; i !=sz; ++i){
		cin >> inp;
		v.push_back(inp); //เอาค่าที่รับเข้ามา(val) ไปใส่ในท้ายสุดของ v (v[i])
	}	
	//การแสดงผลของ vector
	//1. ใช้ index วิ่งใน [ 0, v.size() )
	for (int i = 0; i != v.size(); ++i){
		cout <<"Index " << i << " value is : " << v[i] << endl; //คล้ายๆ array นั่นล่ะ
	}
	//2. ใช้ iterator วิ่งใน [ v.begin(), v.end() )
	std::vector<int>::iterator itr; //ประกาศ iterator ที่ใช้กับ vector<int> ชื่อ itr
	for(itr = v.begin(); itr != v.end(); ++itr){
		int val = *itr; //เอา iterator ชี้ไปที่ val ใน container ช่องที่ v[i]
		cout << "value is :" << val << endl;
	}
	//สามารถใช้ auto itr = v.begin() แทนก็ได้ (C++11 only)
	//3. range based loop (C++11 only)
	for(int val : v){ //ดู val(element valu) ทุกตัวใน v
		cout << val << " ";
	}
	cout << endl;


	// application : adjacency list
	int n, m; // จำนวน vertex , จำนวน edge
	cin >> n >> m;
	for (int i = 0, a, b; i != m; ++i){
		cin >> a >> b; // รับรายละเอียด edge ว่าเชื่อมจุด a กับจุด b
		adj[a].push_back(b);// บอกว่า u เชื่อมไป v
		// ถ้าเป็น undirected graph 
		// adj[v].push_bacl(u) บอกว่า v เชื่อมไป u
	}
	int s; //จุดเริ่มต้น
	cin >> s;
	dfs(s);
	return 0;
}