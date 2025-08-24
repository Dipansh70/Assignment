#include <stdio.h>

void main(){
		int age = 67;
	
	if(age<12){
		printf("Child = %d", age);
	}
	else if(age >= 12 && age <= 19){
		printf("Teenager = %d", age);
	}
	else if(age>= 20 && age <= 59){
		printf("Adult = %d", age);
	}
	else{
		printf("Senior = %d", age);
	}
}