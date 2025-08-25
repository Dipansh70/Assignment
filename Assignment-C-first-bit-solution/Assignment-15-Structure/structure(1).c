#include <stdio.h>
#include <string.h>

struct student {
	int rollNo;
	char name[20];
	int marks;
};

void main(){
	struct student s1, s2;
	
	s1.rollNo = 1;
	strcpy(s1.name,"Dipanshu");
	s1.marks = 89;
	
	printf("Details of 1st student");
	printf("\n rollNo=%d, name=%s , marks =%d",s1.rollNo,s1.name,s1.marks);
	
	printf("\nEnter the 2nd student detail");
	
	printf("Enter rollNo = ");
	scanf("%d",&s2.rollNo);
	
	printf("Enter name");
	scanf("%s",s2.name);
	
	printf("Enter marks");
	scanf("%d",&s2.marks);
	
	printf("Ditals of 2nd student");
	printf("\n rollNo=%d, name=%s, marks = %d",s2.rollNo,s2.name,s2.marks);
}