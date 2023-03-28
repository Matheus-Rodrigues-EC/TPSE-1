#include<stdio.h>
#include "./lib/sum.h"
#include "./lib/sub.h"
#include "./lib/div.h"
#include "./lib/mult.h"


int main(void){

    int A, B;

    printf("\ndigite o primeiro valor: ");
    scanf("%d", &A);

    printf("\ndigite o segundo valor: ");
    scanf("%d", &B);

    printf("\nA soma eh: %d \n", sum(A, B));
    printf("\nA subtracao eh: %d \n", sub(A, B));
    printf("\nA Divisao eh: %d \n", div(A, B));
    printf("\nA multiplicacao eh: %d \n", mult(A, B));

    return 0;
}