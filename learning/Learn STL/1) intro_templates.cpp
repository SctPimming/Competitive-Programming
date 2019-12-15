#include <bits/stdc++.h>
using namespace std;

//int plus(int x, int y){
//	return x+y;
//}

//double plus(double x, double y){ // overloading function
//	return x+y;
//}

template <typename T> // so beautifullllll <3	
T squre(T x){
	return x*x;
}

template <typename T> // class
class my_vec{
	T arr[1000];
	int sz;
public:
	my_vec() : sz(0){} // constructor ---> assign 0 to sz
	void push(T x) {arr[sz] = x; sz++;} // push function
	void print() const { // constant to fix parameter ---> without me == failed
		for(int i = 0; i != sz; ++i) cout << arr[i] << "\n";
	}
	T get(int idx) const{ return arr[idx]; }
	int get_size() const { return sz; }
};
template <typename T>
my_vec<T> operator*(const my_vec<T>& lhs, my_vec<T>& rhs){ // define operator *
	my_vec<T> res;
	for (int i = 0; i != lhs.get_size(); ++i){
		res.push(lhs.get(i) * rhs.get(i));
	}
	return res;
}
int main(){
	//cout << plus(5, 5) << " " << plus(6.5, 7.2) << endl; // use function
	//cout << plus<int>(5, 5) << " " << plus<double>(1.9, 2.3) << endln;  // use template
	my_vec<int> v1, v2;
	v1.push(5);
	v1.push(19);
	v1.push(23);
	v1.print();
	v1 = squre(v1);
	v1.print();
}