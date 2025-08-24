#include <stdio.h>

void main(){
	int n = 5;
	int row, col;
	
	for(row=n; row>=1; row--){
			printf(" ");
		for(col=1; col<=row; col++){
		
			printf(" *");
		}
		printf("\n");
	}
}