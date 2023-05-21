#include<stdio.h>

int main(){
    int score;
    printf("Masukkan nilaimu : ");
    scanf("%d", &score);

    if(score <= 100 && score >= 90){
        printf("Kamu dapat nilai A \n");
    } else if (score >= 80 && score < 89){
        printf("Kamu dapat nilai B \n");
    } else if(score >= 60 && score < 79){
        printf("Kamu dapat nilai C \n");
    } else if(score < 59 && score >= 40){
        printf("Kamu dapat nilai D \n");
    } else {
        printf("Kamu wajib remidi \n");
    }
    
    return 0;
}