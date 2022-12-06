#include<stdio.h>
#include<stdbool.h>

int main() {
    int myAge = 19;
    int votingAge = 12;

    if (myAge >= votingAge) {
        printf("Old enough to vote! \n");
    } else {
        printf("Not old enough to vote. \n");
    }

    return 0;
}