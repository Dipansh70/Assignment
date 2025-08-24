#include<stdio.h>
int main()
{
	int number;
	printf("Enter the integer:");
	scanf("%d",&number);
	
	if(number>0)
	{
		printf("Positive number %d",number);
	}
	else if(number<0) 
	{
		printf("Negative number %d",number);
	}
	else
	{
		printf("the Number is zero");
	}

}