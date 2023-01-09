#include<stdio.h>
//  string.h dipakai untuk menggunakan fungsi manipulasi string, macam strlen, strcat, dsb
#include<string.h>

int main(){
    char hello[30] = "Hello";
    char world[30] = " world, ";
    char c[30] = "C";
    char greetings[30];

    //  strlen dipakai untuk mengetahui panjang string
    printf("%d \n",strlen(hello));

    // strcpy dipakai untuk menyalin string dengan rumus strcpy(target, basis)
    strcpy(greetings, hello);
    printf("%s \n", greetings);

    // strcat dipakai untuk menggabungkan string satu ke yang lainnya dengan rumus strcat(basis, target)
    // Catatan : hanya berlaku ke string yang ukurannya sama persis
    strcat(world, c);
    // Menggabungkan dua kali agar hello, world, dan c menjadi satu string
    strcat(hello, world);
    printf("%s \n", hello);

    return 0;
}
