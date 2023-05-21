#include<stdio.h>

int main(){
    double mass;
    double height;
    const double gravity = 9.8;

    printf("You can count potential energy with this code \n");
    printf("Input mass value (kg) \n");
    scanf("%lf", &mass);
    printf("Input height value (meter)\n");
    scanf("%lf", &height);
    printf("Value of potential energy is potentialEnergy = %lf", mass * gravity * height);

}