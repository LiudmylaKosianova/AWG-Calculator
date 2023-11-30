#include <stdio.h>

int main(){

    double cur;
    int awg;
    printf("Welcome to the AWG Calculator!\n");
    printf("\tEnter your electrical current in Amps: ");
    scanf("%lf", &cur);


    if(cur <= 0.83){
        awg = 28;
    }else if(cur>0.83 && cur<=1.3){
        awg = 26;
    }else if(cur>1.3 && cur<=2.1){
        awg = 24;
    }else if(cur>2.1 && cur<=3.0){
        awg = 22;
    }

    printf("\tFor %.2E Amps you can use %d AwG wire", cur, awg);


    return 0;
}