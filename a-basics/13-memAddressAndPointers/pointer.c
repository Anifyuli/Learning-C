#include<stdio.h>

int main(){
    int june = 6;
    int* month = &june;

    printf("%d\n", june);
    printf("%p\n", &month);

    /*
    Pointer dapat di-deference dengan mengubah identifier compiler dengan yang sesuai dengan tipedata variabel sebelum dirubah menjadi pointer
    */ 
   printf("%d\n", *month);

   return 0;
}