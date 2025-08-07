#include <stdio.h>

void main(){
	int a = 15;
	int b = 20;
	int c = 18;
	
	if(a>b){
		if(a>c){
			printf("greatest number %d", a);
		}
		else{
			printf("greatest number %d", c);
		}
	}
	else{
		if(b>c){
			printf("greatest number %d" ,b);
		}
		else{
			printf("greatest number %d" ,c);
		}
	}
}