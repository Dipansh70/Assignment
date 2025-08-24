#include <stdio.h>

void main() {
    int n = 500;
    int num, rem, sum, temp;

    for(num = 1; num <= n; num++) {
        temp = num;
        sum = 0;

        while(temp > 0) {
            rem = temp % 10;
            sum = sum + rem * rem * rem;
            temp = temp / 10;
        }

        if(sum == num) {
            printf("%d\n", num);
        } 
        else{
        	printf("%d\n", num);
		}
    }
}