// return value and not arrgument passed
#include <stdio.h>
int time();
void main()
{
	int res = time();
	printf("res= %d" , res );
}

int time(){
	int mint = 130;
	int hour;
	hour = mint / 60;
	mint = hour % 60;
	
	return hour;
}