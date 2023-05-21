#include<stdio.h>
int formula(int num);

int formula(int num) {
    if (num > 0) {
        return num + formula(num - 2);
    } else {
        return 0;
    }
}

int main() {
    int result = formula(10);
    printf("%d \n", result);
    return 0;
}