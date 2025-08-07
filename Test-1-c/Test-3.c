#include <stdio.h>

int main() {
    int number = 12345; 
    int lastTwoDigits;

    lastTwoDigits = number % 100;

    printf("Last two digits = %d\n", lastTwoDigits);

}
