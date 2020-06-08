#include<iostream>
#include<string>
using namespace std;
int main(){
    int n, flip = 0;
    string str;
    cin >> n >> str;
    for(int i = 0; i != str.size(); ++i){
        if(flip % 2 == 1){ // ครวจสอบว่าเป็นเลขคี่
            if(str[i] == '0') str[i] = '1'; // ทำการเปลี่ยนสถานะ
            else str[i] = '0';
        }
        if(str[i] == '0'){ //ถ้าหากเจอว่าปิดอยู่
            str[i] == '1'; // เปลี่ยนสถานะ (optional)
            flip++; //เพิ่มจำนวนการเปลี่ยนสถานะ
        }
    }
    cout << flip;
}