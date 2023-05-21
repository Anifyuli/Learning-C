#include<stdio.h>

int main(){
    int start, end, result, loop1, loop2;
    start = 1;
    end = 50;

    for (int i = start ; i <= end; i++)
    {
        loop1 = i;
        printf("%d \n", loop1);
    }

    for (int j = end; j >= start; --j)
    {
        loop2 = j;
        printf("%d \n", loop2);
    }
    
    result = loop1 - loop2;
    printf("Result of loop1 and loop2 is %d \n", result);
}