// return type not arrgument passed
#include <stdio.h>
int temperature();
int main()
{
	int res =  temperature();
	printf("res %d" , res);
}

 int temperature(){
 	int a = 85;
 	int cel;
	cel = a*1.8+32;
	
	return cel;
 }
 
 