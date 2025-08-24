#include <stdio.h>

void main() {
    int n = 4;
    int row, col;

    for(row = 1; row <= n; row++) {
        for(col = 1; col <= row; col++) {
            printf("*");
        }
        printf("\n");
    }

    for(row = n - 1; row >= 1; row--) {
        for(col = 1; col <= row; col++) {
            printf("*");
        }
        printf("\n");
    }
}
