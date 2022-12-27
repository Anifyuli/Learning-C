#include<stdio.h>

int main() {
    int month = 8;

    switch (month)
    {
    case 1:
        printf("January \n");
        break;
    case 2:
        printf("February \n");
        break;
    case 3:
        printf("March \n");
        break;
    case 4:
        printf("April \n");
        break;
    case 5:
        printf("May \n");
        break;
    case 6:
        printf("June \n");
        break;
    default:
        printf("July or another month \n");
        break;
    }

    return 0;
}