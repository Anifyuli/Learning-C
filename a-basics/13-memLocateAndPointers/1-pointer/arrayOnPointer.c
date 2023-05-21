#include<stdio.h>

int main() {
    int x[5] = {6, 7, 8, 9, 10};
    int* ptr;

    // ptr dihubungkan ke alamat data array keempat
    ptr = &x[3]; 

    printf("*ptr = %d \n", *ptr);
    printf("*(ptr+1) = %d \n", *(ptr+1));
    printf("*(ptr-1) = %d \n", *(ptr-1));

    return 0;
}