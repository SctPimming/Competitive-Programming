#include<iostream>
#include<string>
using namespace std;

int main(){
    string result;
    int T, N;
    int submit_time = 0;
    int ac_time = 0, wrong_num = 0;
    cin >> T;
    for(int i = 0; i != T; ++i){
        cin >> N;
        for(int j = 0; j != N; ++j){
            cin >> result >> submit_time;
            if(result == "AC") ac_time = submit_time;
            else wrong_num++;
        }
        cout << ac_time + (20 * wrong_num) << "\n";
        ac_time = 0;
        wrong_num = 0;
    }
    return 0;
}