#include <stdio.h>
void main()
{
	int n;
	int sum = 0;
	printf("enter the value");
	scanf("%d" , &n);
	
	for(int i = 1 ; i<n; i++){
		if(n %  i ==0){
			sum = sum + i;
		}
	}
	
	if(sum == n){
		printf("perfect number %d");
	}else{
		printf("not perfect number %d");
	}
}