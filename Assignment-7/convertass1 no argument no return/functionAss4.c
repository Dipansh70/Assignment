#include <stdio.h>

void vowelconso();

void main(){
	vowelconso();
}

void vowelconso(){
	char val = 'd';
	if(val == 'a' || val == 'e' || val == 'i' || val == 'o' || val =='u'){
		printf("character is a vowel = %c",val);
	}
	else{
		printf("character is a consonant = %c",val);
	}
}