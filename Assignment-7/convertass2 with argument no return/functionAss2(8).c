// return and not passed arrgument;
#include <stdio.h>
int pere();
void main()
{
	int res = pere();
	printf("Perimeter %d" , res);
}

int pere(){
	int lenght= 10;
	int  width = 20;
	
	int perimeter = 2*(lenght+width);
	
	return perimeter;
	
}