/*
    Program untuk seleksi beasiswa
    Input nama, NIM, alamat, IPK, semester, nama wali, pekerjaan wali, gaji
    Kriteria jika IPK lebih dari 3.0 minimal semester 5, pendapatan wali maks. 3 juta/bulan maka  output selamat mendapatkan beasiswa. Jika IPK dibawah 3.0 dan pendapatan diatas 3 juta/bulan tidak maka output maaf anda belum diterima.
*/

#include<stdio.h>

int main(){
    char nama[120], nim[120], alamat[120], namaWali[120], kerjaWali[120];
    double ipk;
    int semester, gaji;

    printf("Masukkan data diri \n");
    printf("Nama : ");
    scanf("%s", &nama);
    printf("NIM : ");
    scanf("%s", &nim);
    printf("Semester : ");
    scanf("%d", &semester);
    printf("IPK : ");
    scanf("%lf", &ipk);
    printf("Alamat : ");
    scanf("%s", &alamat);
    printf("Nama Wali : ");
    scanf("%s", namaWali);
    printf("Gaji wali per bulan : ");
    scanf("%d", &gaji);

    printf(" \n");

    printf("Data mahasiswa \n");
    printf("Nama : %s \n", nama);
    printf("NIM : %s \n", nim);
    printf("Semester : %d \n", semester);
    printf("IPK : %lf \n", ipk);
    printf("Alamat : %s \n", alamat);
    printf("Nama wali : %s \n", namaWali);
    printf("Gaji wali per bulan : %d \n", gaji);

    if (ipk > 3.0 && gaji < 3000000 && semester >= 5) {
        printf("Selamat Anda terpilih mendapatkan beasiswa \n");
    } else if(ipk > 3.0 && gaji > 3000000 && semester < 5) {
        printf("Maaf Anda tidak lolos sebagai penerima beasiswa \n");
    } else if(ipk > 3.0 && gaji < 3000000 && semester < 5) {
        printf("Maaf Anda tidak lolos sebagai penerima beasiswa \n");
    } else if(ipk < 3.0 && gaji < 3000000 && semester < 5) {
        printf("Maaf Anda tidak lolos sebagai penerima beasiswa \n");
    } else {
        printf("Maaf Anda tidak lolos sebagai penerima beasiswa \n");
    }
    
    return 0;
}