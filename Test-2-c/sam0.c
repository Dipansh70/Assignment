#include <stdio.h>

void main(){
	int num = 74;
	if(num >=1 && num <= 50){
		printf("30rs/unit");
	}
	else if( num >= 51 && num <= 150){
		printf("50rs/unit");
	}
	else{
		printf("150rs/unit");
	}
}