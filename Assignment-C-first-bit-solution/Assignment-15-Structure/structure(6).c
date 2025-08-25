#include <stdio.h>

struct Date{
	int date;
	int month;
	int year;
};
void main(){
	struct Date d1 , d2;
	
	d1.date = 24;
	d1.month = 4;
	d1.year = 2005;
	
	printf("Enter 1st details");
	printf("\n date=%d, month=%d, year=%d", d1.date,d1.month,d1.year);
	
	printf("\n Enter 2nd value");
	
	printf("Enter date =");
	scanf("%d",&d2.date);
	
	printf("Enter month =");
	scanf("%d",&d2.month);
	
	printf("Enter year =");
	scanf("%d",&d2.year);
	
	printf("Enter 2nd details");
	printf("\n date=%d, month=%d, year=%d", d2.date,d2.month,d2.year);
}