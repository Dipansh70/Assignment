#include <stdio.h>

void main(){
	int no = 3;
	if(no%3==0 && no%5==0){
		printf("Divisble by both");
	}
	else if(no%3==0 && no%5!=0){
		printf("Divisble by 3");
	}
	else if(no%3==0 && no%5==0){
		printf("Divisible by 5");
	}
	else{
		printf("Divisible by None");
	}
}