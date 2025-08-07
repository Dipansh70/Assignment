#include <stdio.h>

void main() {
	int a = 10;
	int b = 20;
	int tap ;
	
	tap = a;
	a=b;
	b=tap;
	
	printf("a = %d  b = %d ", a, b);
	
}