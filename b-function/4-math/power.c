#include<stdio.h>
#include<math.h>

int main() {
    float baseNumber, expoNumber;

    printf("You can make a exponential with entering two number, it's base and exponent number \n");
    printf("Enter base number: ");
    scanf("%f", &baseNumber);
    printf("Enter exponent number : ");
    scanf("%f", &expoNumber);

    // Fungsi pow() dipakai untuk menghitung nilai dari perpangkatan dengan rumus pow(x,y) dengan rincian x pangkat y
    printf("Your exponential result is %f \n", pow(baseNumber,expoNumber));

    return 0;
}