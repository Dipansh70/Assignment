// return value and not arrgument 
#include <stdio.h>
int value();
void main()
{
	int res = value();
	printf("squre %d" , res);
	
}

int value()
{
	int a = 10 ;
	int b = 20;
	
	int c = a*a;
	int d = b*b*b ;
	
	 printf("Cube of %d = %d\n", b, d);
	
	return c;
}
