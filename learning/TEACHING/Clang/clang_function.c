#include<stdio.h>

float bmi_cal(float w, float h){
    float cat;
    cat = w/(h*h);
    return cat;
}

int main(){
    float weight, height;
    scanf("%f %f", &weight, &height);
    float ans1 = bmi_cal(weight, height);
    printf("%f", ans1);
}