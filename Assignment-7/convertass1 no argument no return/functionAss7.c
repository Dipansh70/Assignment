#include <stdio.h>

void discount();

void main(){
	discount();
}

void discount(){
	 float ba = 5000;  
    float da, ta, hra, total;

    if(ba <= 5000) {
        da = ba * 0.10;
        ta = ba * 0.20;
        hra = ba * 0.25;
    } else {
        da = ba * 0.15;
        ta = ba * 0.25;
        hra = ba * 0.30;
    }

    total = ba + da + ta + hra;

    printf("ba salary = %.2f\n", ba);
    printf("da = %.2f\n", da);
    printf("ta = %.2f\n", ta);
    printf("hra = %.2f\n", hra);
    printf("total salary = %.2f\n", total);
}