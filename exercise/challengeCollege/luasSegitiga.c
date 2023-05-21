#include<stdio.h>

int main(){
    double alas, tinggi;
    printf("Masukkan panjang alas segitiga dalam cm : ");
    scanf("%lf", &alas);
    printf("Masukkan panjang tinggi segitiga dalam cm : ");
    scanf("%lf", &tinggi);

    double luas = 0.5 * alas * tinggi;
    printf("Luas segitiga adalah %lf cm \n", luas);
}