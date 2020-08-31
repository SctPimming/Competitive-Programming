#include<stdio.h>
#include<stdbool.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    // arithmetic operator: การดำเนินการทางเลขคณิต
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a x b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a mod b = %d\n\n", a % b);

    // comparison operator
    printf("a > b = %d\n", a > b);
    printf("a > b = %d\n", a < b);
    printf("a = b = %d\n", a == b);
    printf("a != b = %d\n", a != b);
    printf("a >= b = %d\n", a >= b);
    printf("a <= b = %d\n\n", a <= b);

    // logical operator
    bool p = true, q = false;
    printf("p and q = %d\n", p && q);
    printf("p or q = %d\n", p || q);
    printf("not p = %d\n", !p);
    printf("not q = %d\n\n", !q);

}