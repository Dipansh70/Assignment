#include <stdio.h>

void main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int result = 0;
    int q = n;
    int fact;

    while(q != 0) {
        int rem = q % 10;
        fact = 1;

        for (int i = 1; i <= rem; i++) {
            fact = fact * i;
        }

        result = result + fact;
        q = q / 10;
    }

    if (result == n) {
        printf("This is a strong number: %d\n", n);
    } else {
        printf("This is not a strong number: %d\n", n);
    }
}