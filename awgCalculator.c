#include <stdio.h>

int main(){

    double cur;
    int awg;
    printf("Welcome to the AWG Calculator!\n");
    printf("\tEnter your electrical current in Amps: ");
    scanf("%lf", &cur);
    printf("\tFor %.2E Amps you can use %d AwG wire");


    return 0;
}