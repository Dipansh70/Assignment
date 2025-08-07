#include <stdio.h>

void main(){
		int n = 4;
		int row , col;
		int num =1;
	
	for(row=1; row<=n; row++){
		for(col=1; col<=row; col++){
			printf("%d", num);
			num++;
		}
		printf("\n");
	}   
}