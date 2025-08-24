
#include <stdio.h>
int value();
void main()
{
	int res = value();
	printf("area of cricle %d" , res);
}

int value()
{
	int a = 10;
	int c  = 3.14;
	
	int d = c*a*a;
	return d;
}