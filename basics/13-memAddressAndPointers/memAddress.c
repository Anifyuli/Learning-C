#include<stdio.h>

int main(){
    int age = 19;
    int* myAge = &age;

    printf("%d\n", age);

    /*
    Mengambil informasi alamat memori dengan ditambah * pada tipedata, ditambah dengan menambahkan & didepan nama variabel serta dengan mencetak pointer dengan menggunakan %p pada identifier compiler
    */

   printf("%p\n", age);
   printf("%p\n", &myAge);

    return 0;
}