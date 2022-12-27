#include<stdio.h>

int main() {
    int myMatrix [2][3] = {{2, 3, 1}, {7, 4, 2}};
    int i,j;

    // Ambil data matriks dari posisi indeks baris ke-1 dan kolom ke-0
    printf("%d\n", myMatrix[1][0]);

    //Menampilkan data matriks keseluruhan dengan for
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("My matrix member is %d\n", myMatrix[i][j]);
        }
        
    }
    
}