#include <stdio.h>

int main() {

    float jari1;
    double jari2;

    printf("Enter a number : ");
    scanf("%f", & jari1);
    printf("Enter another number: ");
    scanf("%lf", & jari2);

    printf("luas = %lf", 3.14 * jari1 * jari2);

    return 0;
}