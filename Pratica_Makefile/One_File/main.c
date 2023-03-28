#include <stdio.h>

int sum(int num1, int num2){
    return num1 + num2;
}

int sub(int num1, int num2){
    return num1 - num2;
}

int main(void){

    int A, B;

    scanf("%d", &A);
    scanf("%d", &B);

    printf("%d \n", sum(A, B));
    printf("%d \n", sub(A, B));

    return 0;
}