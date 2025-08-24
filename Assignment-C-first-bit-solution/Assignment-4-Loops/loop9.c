#include <stdio.h>

void main(){
	int n = 251;
	int rev = 0, s;
	int temp = n;
	
	 while(n > 0){
	 	s  = n%10;
	 	rev = rev * 10 + s;
	 	n = n/10;
	 	}
	 
	 printf("Reversed number = %d\n", rev);
	 
	 
	if(temp == rev){
		printf("Polidroam");
	}
	else{
		printf("not polidroam");
	}
 }

