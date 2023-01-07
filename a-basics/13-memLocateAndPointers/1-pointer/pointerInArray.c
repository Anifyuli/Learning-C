#include<stdio.h>

int main() {
    // Definisi variabel
    int i, x[5], sum = 0;
    printf("Enter 5 number: ");

    /*  Perulangan for untuk menciptakan pointer didalamnya
        Pointer dipakai untuk mengakses setiap anggota array 
    */
    for (i = 0; i < 5; i++)
    {
        scanf("%d", x + i);

        // Letak pointer diletakkan
        sum += *(x + i);
    }

    // Mencetak nilai hasil penjumlahan anggota array x[5]
    printf("Sum is %d", sum);

    return 0;
}