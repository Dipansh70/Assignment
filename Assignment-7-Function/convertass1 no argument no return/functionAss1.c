#include <stdio.h>

void evenodd();

void main(){
	evenodd();
}

void evenodd(){
	
	int num = 5;
	if(num%2==0){
		printf("even= %d", num );
	}
	else{
		printf("odd = %d" , num );
	}
} 
