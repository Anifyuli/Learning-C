#include<stdio.h>
#include<math.h>

int main() {
    float myNum;
    printf("Enter your number : ");
    scanf("%f", &myNum);
    // Gunakan fungsi sqrt() untuk mencetak 
    printf("Your square root of your number is %f \n", sqrt(myNum));

    return 0;
}