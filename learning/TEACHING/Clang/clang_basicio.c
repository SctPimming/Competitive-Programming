
#include<stdio.h>
// stdio -> standard input/output เอาไว้ใช้รับค่า/แสดงค่า
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

int add(int a, int b){
    return a + b;
}

int main(){ //จำเป็นต้องมีในทุกโปรแกรม
    printf ("\n Something you want to show.");

    printf("\t this is tab.");
    printf("\n this is endline.\n");

    int number;
    printf("input your number\n");
    scanf("%d", &number);
    printf("Your number is %d", number);

}