#include <stdio.h>

struct Distance {
    int feet;
    int inch;
};

void main() {
	
    struct Distance d1, d2;

    d1.feet = 5;
    d1.inch = 8;

    printf("Distance 1: %d feet %d inches\n", d1.feet, d1.inch);

    printf("\nEnter feet: ");
    scanf("%d", &d2.feet);

    printf("Enter inches: ");
    scanf("%d", &d2.inch);

    printf("Distance 2: %d feet %d inches\n", d2.feet, d2.inch);
}
