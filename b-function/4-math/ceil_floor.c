#include<stdio.h>
#include<math.h>

int main() {
    double x = 2.3;
    // Fungsi ceil() dipakai untuk membulatkan keatas
    printf("Round upwards of %lf is %lf \n", x,ceil(x));
    // Fungsi floor() dipakai untuk membulatkan kebawah
    printf("Round downwards of %lf is %lf \n", x,floor(x));

    return 0;
}