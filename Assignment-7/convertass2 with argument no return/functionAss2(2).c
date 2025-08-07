#include <stdio.h>

void convert(int temp);

void main(){

	int cel;
	
	 printf("Enter temperature in Celsius: ");
    scanf("%d", &cel);

	convert(cel);
	
}

void convert(int temp){
	
	float fahrenheit;

    fahrenheit = temp * 1.8 + 32;

    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    
}