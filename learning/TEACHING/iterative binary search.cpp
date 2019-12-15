//Author : Amethyst 
#include <iostream> //จะใช้ input output
#include <vector> // จะใช้ vector
#include <algorithm> // จะใช้ sort function
using namespace std;

std::vector<int> v; // ประกาศ vector ที่เก็บ int ชื่อว่า v

int main(){
	int n;
	cin >> n;
	for(int i = 0, val; i != n; ++i){
		cin >> val;
		v.push_back(val); // เอาค่า val ไปยัดใส่ vector v
	}
	sort(v.begin(), v.end()); // sort ตั้งแต่เริ่มจนจบ (begin -> end)
	for(auto itr = v.begin(); itr < v.end(); ++itr) 
		cout << "idx "  << itr-v.begin() << " value " << *itr << "\n"; 
	int l = 0, r = n;  // กรอบการค้นหา อยู่ใน [l, r)
	int key; // ตัวที่จะค้นหา
	cin >> key;
	while(l<r){ // binary search
		int m = (l+r)/2; // mid = (left+right)/2;
		if(v[m] > key) r = m; // ค่ามากไปก็ขยับกรอบมาด้านซ้าย
		//bsearch(l, m-1, key);
		else if(v[m] < key) l = m; // ค่าน้อยไปก็ขยับกรอบมาด้านขวา
		//bsearch(m+1, r, key)
		else if(v[m] == key){ //เจอค่าที่ตรงกันแล้ว
			printf("found\n");
			break; //พอเจอแล้วก็หยุด loop
		}
	}
}