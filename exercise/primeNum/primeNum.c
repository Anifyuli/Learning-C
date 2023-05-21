#include<stdio.h>

int check_prime(int num);

int main()
{
   int n1, n2, i, flag;
   printf("Masukkan dua bilangan interval: ");
   scanf("%d %d",&n1, &n2);
   printf("Bilangan prima antara %d dan %d adalah : ", n1, n2);
   for(i = n1 + 1; i < n2; ++i)
   {
      flag = check_prime(i);
      if(flag==0)
         printf("%d ",i);
   }
   return 0;
}

int check_prime(int num)
{
   int j, flag= 0;
   for(j = 2; j <= num / 2; ++j){
        if(num % j == 0){
            flag = 1;
            break;
        }
   }
   return flag;
}