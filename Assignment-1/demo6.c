#include <stdio.h>

void main(){
	int a = 2;
	int b = 3;
	int c = 4;
	int d = 5;
	
	int res = a*a;
	int res1 = b*b;
	int res2 = c*c;
	int res3 = d*d;
	
	printf("res = %d\n", res);
	printf("res1 = %d\n", res1);
	printf("res2 = %d\n", res2);
	printf("res3 = %d\n", res3);
	
	int res4 = a*a*a;
	int res5 = b*b*b;
	int res6 = c*c*c;
	int res7 = d*d*d;
	
	printf("res4 = %d\n", res4);
	printf("res5 = %d\n", res5);
	printf("res6 = %d\n", res6);
	printf("res7 = %d\n", res7);
}