#include<stdio.h>

int main() {
    int sum1 = 100 + 50;       // 150 (100 + 50)
    int sum2 = sum1 - 50;      // 100 (150 - 50)
    int sum3 = sum2 * sum2;    // 10000 (100 * 100) 
    int sum4 = sum3 / sum2;    // 100 (10000 / 100)
    int sum5 = sum4 % 3;       // 1 (100 % 3)

    printf("%d \n", sum1);
    printf("%d \n", sum2);
    printf("%d \n", sum3);
    printf("%d \n", sum4);
    printf("%d \n", sum5);

    return 0;
}