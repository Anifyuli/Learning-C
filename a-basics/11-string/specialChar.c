#include<stdio.h>

/*

Spesial karakter dalam bahasa C beberapa diantaranya
EscChar : Output = Keterangan
\' : ' = Tanda kutip satu
\" : " = Tanda kutip dua
\ : \ = Garing belakang (backslash)
\n : baris baru = Membuat baris baru
\t : tabulasi = Menambahkan tabulasi pada baris
\0 : kosong = Pointer untuk nilai null

*/ 

int main(){
    char spirit[] = "Keep your \"spirit\", my darling!";

    printf("%s",spirit);
}