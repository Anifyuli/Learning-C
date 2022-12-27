#include<stdio.h>
// Tambahkan header string untuk modifikasi string dengan strcpy
#include<string.h>

// struct dipakai untuk menciptakan struktur pada C
struct data {
    char initial;
    int age;
    float height;
    char *hobby;
};

int main() {
    // Inisialisasi struct pada variabel
    struct data jack;
    // Membuat inisialisasi ke variabel berbeda dengan member yang sama
    struct data alma;
    // Cara sederhana mendefinisikan struct
    struct data ilya = {'i', 20, 1.65, "playing guitar"};


    // Memasukkan nilai ke setiap atau bagian tertentu (member) dari struct
    jack.initial = 'j';
    jack.age = 18;
    jack.height = 1.75;
    strcpy(jack.hobby, "gardening");
    // Nilai dari struct baru dengan member yang sama dan nilai yang berbeda
    alma.initial = 'A';
    alma.age = 17;
    alma.height = 1.65;
    strcpy(alma.hobby,"painting");

    // Mencetak nilai dari member struct
    printf("He name with initial %c \n", jack.initial);
    printf("Jack age is %d years old \n", jack.age);
    printf("Jack height is %f cm \n", jack.height);
    printf("Jack hobby is %s \n", jack.hobby);

    printf("She name with initial %c \n", alma.initial);
    printf("Alma age is %d years old \n", alma.age);
    printf("Alma height is %f cm \n", alma.height);
    printf("Alma hobby is %s \n", alma.hobby);

    return 0;

}
