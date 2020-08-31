#include<stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    // magic number = เลขคู่ที่มากกว่า 0 = เป็นเลขคู่ และ มีค่ามากกว่า 0
    if(num%2 == 1 && num > 0){
        printf("This is a magic number.");
    }
    else{
        printf("This is not a magic number.");
    }
}