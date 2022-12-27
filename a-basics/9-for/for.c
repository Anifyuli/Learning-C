#include<stdio.h>

int main() {
    int n;

    printf("Result");

    for (n = 0; n <= 10; n++)
    {
        printf("%d \n", n);
    }

    printf("Result + 2");

    for (n = 0; n <= 10; n = n + 2)
    {
        printf("%d \n", n);
    }

    return 0;
}