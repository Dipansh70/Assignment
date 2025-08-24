#include <stdio.h>

void main() {
    int num1, num2, num3, num4, num5;
    int sum, average;
    
    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
    
    sum = num1 + num2 + num3 + num4 + num5;
    
    average = sum / 5;
    
    printf("Average = %.2d", average);
    
}