#include<stdio.h>

int main(){
    printf("Masukkan nilai : ");
    int j;
    scanf("%d", &j);

    for (int i = 1; i <= 10; i++)
    {
        for (i = 0; i <= 10; i++)        
        {
            int result = i * j;
            printf("%d * % d = %d \n",i, j, result);
        }
        
        
    }
    
}