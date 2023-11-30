#include <stdio.h>

int main(){

    double cur, diam;
    int awg;
    printf("Welcome to the AWG Calculator!\n\n");
    printf("\tEnter your electrical current in Amps: ");
    scanf("%lf", &cur);


    if(cur <= 0.83){
        awg = 28;
        diam = 0.013;
    }else if(cur>0.83 && cur<=1.3){
        awg = 26;
        diam = 0.016;
    }else if(cur>1.3 && cur<=2.1){
        awg = 24;
        diam = 0.02;
    }else if(cur>2.1 && cur<=3.0){
        awg = 22;
        diam = 0.025;
    }else if(cur>3.0 && cur<=5.0){
        awg = 20;
        diam = 0.03;
    }

    printf("\tFor %.2E Amps you can use %d AwG wire\n", cur, awg);
    printf("\tThe diameter of this wire is %.3lf inches\n", diam);


    return 0;
}