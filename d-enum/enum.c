#include<stdio.h>
/*  Enum atau enumerasi adalah bentuk spesial yang berupa kumpulan nilai konstan.
    Enum dibuat dengan kata kunci enum di awal deklarasi
*/

enum Rating{
    lowest = 1,
    low = 2,
    medium = 3,
    high = 4,
    highest = 5 
};

int main(){
    /*
        Kata kunci enum juga bisa dipakai untuk memanggil anggota enum yang telah didefinisikan sebelumnya dengan format dibawah : 
        enum NamaEnum variabelBaru

        atau bisa juga langsung di-override ke anggota enum yang telah ditentukan
        enum NamaEnum variabelBaru = anggotaEnum
    */
    enum Rating myRating;
    printf("Select your rating (1-5) : ");
    scanf("%d",&myRating);
    switch (myRating)
    {
    case 1:
        printf("Your rating is 1 star, don'\t sad \n");
        break;
    
    case 2:
        printf("Your rating is 2 star, keep spirit \n");
        break;

    case 3:
        printf("Your rating is 3 star, better than lower from it \n");
        break;
    
    case 4:
        printf("Your rating is 4 star, dont be down \n");
        break;
    
    case 5:
        printf("Your rating is 5 star, its awesome \n");
        break;

    default:
        printf("Not rated \n");
        break;
    }

    return 0;
}