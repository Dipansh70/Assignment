#include <stdio.h>

void main(){
	int marks = 56;
	if(marks>75){
		printf(" Show = Distinction");
	}
	else{
		if(marks>65){
			printf("Show = First class");
		}
		else{
			if(marks>55){
				printf("Show = Second class");
			}
			else{
				if(marks>44){
					printf("Show = pass");
				}
				else{
					printf("Show = Fail");
				}
			}
		}
	}
}