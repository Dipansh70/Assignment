#include <stdio.h>

void pallindrome();

void main(){
	pallindrome();
}

void pallindrome(){
	int no = 121;
	 int res1, res2, res3, resv;
	 
	 res1 = no % 10;
	 res2 = no/10%10;
	 res3 = no/100;
	 
	 resv = res1 * 100 + res2 * 10 + res3;
	 
	 if(no==resv){
	 	printf("pallindrome %d", no);
	 }
	 else{
	 	printf("pallindrome not", no);
	 }
}