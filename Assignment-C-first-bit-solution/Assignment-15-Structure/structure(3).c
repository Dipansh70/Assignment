#include <stdio.h>
#include <string.h>

struct admin{
	int id;
	char name[20];
	double sallary;
	double allowance;
};
void main(){
	struct admin a1 , a2;
	
	a1.id = 01;
	strcpy(a1.name,"Anjali");
	a1.sallary = 3000;
	a1.allowance = 5000;
	
	printf("The details of this structer");
	printf("\n id=%d, name=%s, salary=%.2lf, allowance=%.2lf\n" ,a1.id ,a1.name ,a1.sallary ,a1.allowance);
	
	printf("\n Enter 2nd admin details");
	
	printf("Enter the id");
	scanf("%d",&a2.id);
	
	printf("Enter the name");
	scanf("%s",a2.name);
	
	printf("Enter the sallary");
	scanf("%lf",&a2.sallary);
	
	printf("Enter the allowance");
	scanf("%lf",&a2.allowance);
	
	printf("Details of 2nd admin");
	printf("\n id=%d, name=%s, salary=%.2lf, allowance=%.2lf\n", a2.id ,a2.name, a2.sallary ,a2.allowance);
	
}