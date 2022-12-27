#include<stdio.h>

// Fungsi tanpa parameter
void myName() {
    printf("Anif \n");
}

// Fungsi dengan parameter
void girlName(char name[]){
    printf("Hello, %s\n", name);
}

// Fungsi dengan banyak parameter
void intro(char name[], int age, double height){
    printf("Hello, my name is %s, my age is %d years old. My height is %.2lf m\n", name, age, height);
}

// Fungsi dengan nilai kembalian spesifik
int square(int number){
    printf("%d \n", number * number);
}

// Fungsi nilai kembalian spesifik
double circleWide(int arc){
    double pi = 3.14;
    return printf("%.2lf \n", pi * arc * arc);
}

int main(){
    myName();
    girlName("Diana");
    intro("Roger", 20, 1.75);
    square(7);
    circleWide(7);

    return 0;
}