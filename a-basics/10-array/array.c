#include<stdio.h>

int main() {
    int oneToFive[] = {1, 2, 3, 4, 5};
    int i;

    // Akses isi array dengan indeks
    printf("%d\n", oneToFive[3]);

    oneToFive[3] = 7;
    printf("%d\n", oneToFive[3]);

    // Mencetak isi array dengan perulangan for
    for (i = 0; i < 5; i++)
    {
        printf("One to five array is %d\n", oneToFive[i]);
    }
    

}