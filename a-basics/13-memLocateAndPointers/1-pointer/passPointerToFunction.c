#include <stdio.h>

void addTwo(int* ptr) {
    // Argumen yang terisi ke fungsi yang memiliki pointer akan dijumlahkan dengan 2
    (*ptr)+= 2;
}

int main()
{
    // Menetapkan nilai suatu variabel ke variabel ber-pointer
    int* p, i = 3;
    p = &i;
    // Menetapkan nilai ber-pointer ke fungsi addTwo()
    addTwo(p);

    // Cetak nilai yang sudah ditetapkan
    printf("%d\n", *p);
    return 0;
}