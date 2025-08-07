#include <stdio.h>

void main(){
	int year = 2021;
	if(year%4==0 || 100 !=0 && year%400==0){
		printf("leap year %d", year);
	}
	else{
		printf("this is not leap year = %d", year);
	}
}