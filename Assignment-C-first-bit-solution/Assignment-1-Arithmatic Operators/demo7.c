#include <stdio.h>

void main() {
	int min = 140;
	int hour;
	hour = min/90;
	min = min%60;
	
	printf("hour = %d and min =%d", hour, min);
	
}