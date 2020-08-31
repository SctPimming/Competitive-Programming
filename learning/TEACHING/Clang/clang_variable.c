#include<stdio.h>

int main(){
    int integer;
    float real_number;
    char character;
    scanf("%f %d %c", &character, &real_number, &integer);
    printf("my integer is %d, the real value is %f and the character is %c", integer, real_number, character);
}