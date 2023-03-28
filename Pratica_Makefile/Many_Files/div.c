#include<stdio.h>
#include "./lib/div.h"

int div(int A, int B){
    if(B != 0){
        return A/B;
    }else{
        printf("Valor de B igual a 0");
        return 0;
    }
}