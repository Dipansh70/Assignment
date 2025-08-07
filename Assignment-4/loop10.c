#include <stdio.h>

void main() {
    int n = 12345;
    int first, last;

    last = n % 10; 

    while (n >= 10) {
        n = n / 10;
    }
    first = n;

    printf("Sum of first and last digit = %d", first + last);
}

