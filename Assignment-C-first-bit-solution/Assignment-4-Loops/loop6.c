#include <stdio.h>

void main(){
	int val = 28;
	int sum = 0;
	int num = 1;
	
	while( i<val){
		if(val%i==0){
			sum = sum +i;
		}
		i++;
	}
	if(val == sum){
		printf("perfect %d" , val);
	}else{
		printf("not perfect" , val);
	}
	
}
