#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

int main() {
    struct Complex c1, c2;

    
    c1.real = 3.5;
    c1.imag = 2.5;

    printf("Complex 1 = %.2f  %.2f \n", c1.real, c1.imag);


    printf("\nEnter real part: ");
    scanf("%f", &c2.real);

    printf("Enter imaginary part: ");
    scanf("%f", &c2.imag);

    printf("Complex 2 = %.2f  %.2f \n", c2.real, c2.imag);


}
