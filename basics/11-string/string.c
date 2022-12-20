#include<stdio.h>

int main() {
    char myName[] = "Anif";
    
    // Cetak keseluruhan string
    printf("My name is %s\n", myName);

    /* Ambil bagian dari string dengan indeks, seperti pada contoh indeks ke-0 */
    printf("First letter in my name is %c\n", myName[0]);

    // Modifikasi string dengan memanggil indeks karakter dan merubahnya setelah pemanggilan indeks
    myName[0] = 'E';
    printf("My name now is %s\n", myName);
    printf("First letter in my name now is %c\n", myName[0]);

    // Cara membuat string baru dengan membuat string literal dengan merakit karakter satu-persatu

    char newName[] = {'D','a','h','l','i','a', '\0'};
    printf("My new name now is %s\n", newName);
    printf("First letter in my new name now is %c\n",newName[0]);

    // Cara mengetahui panjang suatu string dengan menggunakan fungsi sizeOf dengan pointer compiler %lu
    printf("My name length is %lu\n", sizeof(myName));
    printf("My new name length is %lu\n", sizeof(newName));
}