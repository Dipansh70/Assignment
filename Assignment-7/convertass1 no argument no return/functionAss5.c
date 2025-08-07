#include <stdio.h>

void voteage();

void main(){
	voteage();
}

void voteage(){
	int age = 16;
	if(age>18){
		printf("Vote = %d ", age);
	}
	else{
		printf("Can,t vote = %d" ,age);
	}
}