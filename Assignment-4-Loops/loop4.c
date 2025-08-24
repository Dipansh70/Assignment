#include <stdio.h>

void main(){
	int n = 6;
	int i = 1;
	int sum = 0;
	
	while(i < n){
		
		 if(n % i ==0 ){
	 	sum = sum + i;
	 }
		 i++;
	 }
	 if(n==sum){
	 	printf("Prime %d",n);
	 }	
	 else{
	 	printf("Not Prime %d",n);
	 }


}
