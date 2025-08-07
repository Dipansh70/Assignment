#include <stdio.h>

void main() {
	char val ='A';
	if(val >='A' && val <='Z'){
		printf("Character is Uppercase = %c", val);
	}
	else if(val >='a' && val <='z'){
		printf("Character is Lowecase = %c", val);
	}
	else{
		printf("Character is not a letter = %c", val);
	}
}