#include <stdio.h>
#include <string.h>

struct SalesManager{
	int id;
	char name[20];
	double salary;
  	float incentive;
  	int target;
};
void main(){
	struct SalesManager sm1 , sm2;
	sm1.id=10;
	strcpy(sm1.name,"Sahil");
	sm1.salary = 200000;
	sm1.incentive = 2.00;
	sm1.target = 45;
	
	printf("The details of 1st sales Manager");
	printf("\n id=%d, name=%s, salary=%.2lf, incentive=%f, target=%d" , sm1.id,sm1.name,sm1.salary,sm1.incentive,sm1.target);
	
	printf("\nEnter 2 SalesManager details");
	
	printf("Enter id =");
	scanf("%d" , &sm2.id);
	
	printf("Enter name =");
	scanf("%s",sm2.name);
	
	printf("Enter salary =");
	scanf("%lf",&sm2.salary);
	
	printf("Enter incentive =");
	scanf("%f",&sm2.incentive);
	
	printf("Enter target =");
	scanf("%d",&sm2.target);
	
	printf("Enter the 2nd Sales Manager deatils");
	printf("\n id=%d , name=%s , salary=%.2lf, incentive=%f, target=%d ", sm2.id,sm2.name,sm2.salary,sm2.incentive,sm2.target);
}