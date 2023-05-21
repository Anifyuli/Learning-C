#include<stdio.h>

int main(){
    int num;
    printf("Please input a number : ");
    scanf("%d", &num);

    if(num % 2 == 1){
        printf("You input %d and it's odd number \n", num);
    } else {
        printf("You input %d and it's even number \n", num);
    }

    return 0;
}