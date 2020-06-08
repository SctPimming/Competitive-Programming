#include<stdio.h>
#include<string.h> // ใช้ funtion strcmp
char str[5];
int main(){
    int T, N;
    int submit_time = 0;
    int ac_time = 0, wrong_num = 0;
    scanf("%d", &T);
    for(int i = 0; i != T; ++i){
        scanf("%d", &N);
        for(int j = 0; j != N; ++j){
            scanf("%s", str);
            scanf("%d", &submit_time);
            if(strcmp(str, "AC") == 0) ac_time = submit_time;
            else wrong_num++; 
        }
        printf("%d\n", ac_time + (20 * wrong_num));
        ac_time = 0;
        wrong_num = 0;
    }
}
