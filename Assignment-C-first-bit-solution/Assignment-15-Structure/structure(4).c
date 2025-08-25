#include <stdio.h>
#include <string.h>

struct Hr{
	int id;
	char name[20];
	double salary;
	double commission;
};

void main(){
	struct Hr h1 , h2 ;
	
	h1.id=2;
	strcpy(h1.name,"shivi");
	h1.salary = 6000;
	h1.commission = 9000;
	
	printf("Enter the details of 1st Hr");
	printf("\n id=%d, name=%s, salary=%.2lf, commission=%.2lf",h1.id,h1.name,h1.salary,h1.commission);
	
	printf("\n Enter 2nd Hr details");
	
	printf("Enter the id = ");
	scanf("%d",&h2.id);
	
	printf("Enter the name = ");
	scanf("%s",h2.name);
	
	printf("Enter the salary = ");
	scanf("%lf",&h2.salary);
	
	printf("Enter the commission = ");
	scanf("%lf",&h2.commission);
	
	printf("The deatils of 2nd Hr");
	printf("\n id=%d, name=%s, salary=%.2lf, commission=%.2lf",h2.id,h2.name,h2.salary,h2.commission);
	
}
	