#include <stdio.h>
#include <string.h>

struct Employee{
	int id ;
	char name[20];
	double sallary;
};

void main(){
	struct Employee e1,e2;
	
	e1.id = 101;
	strcpy(e1.name,"Dipanshu");
	e1.sallary = 10000;
	
	printf("Details of 1 student");
	printf("\n id=%d, name=%s, sallary=%lf",e1.id,e1.name,e1.sallary);
	
	printf("\n Enter the 2nd student details");
	
	printf("Enter id = ");
	scanf("%d",&e2.id);
	
	printf("Enter name = ");
	scanf("%s",e2.name);
	
	printf("Enter sallary");
	scanf("%lf",&e2.sallary);
	
	printf("Details of 2nd student");
	printf("\n id=%d, name=%s, sallary=%lf",e2.id,e2.name,e2.sallary);
	
}