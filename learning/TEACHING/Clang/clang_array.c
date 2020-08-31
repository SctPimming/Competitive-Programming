#include<stdio.h>


int main(){
    // float student[4000];
    // for(int i = 0; i < 5; i++){
    //     scanf("%f", student[i]);
    // }

    char name[6];
    scanf("%s", name);
    printf("you are %s.", name);

    float student[10][50];
    for(int subject = 0; subject < 10; subject++){
        for(int id = 0; id < 50; id++){
            scanf("%f", student[subject][id]);
        }
    }

    char name[100][20];
    for(int id = 0; id < 100; id++){
        scanf("%s", name[id]);
    }
}