#include <stdio.h>

void findarea(float radius);

void main(){
	 float radius;
   
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    
    findarea(radius);
}

void findarea(float radius){
	
	 const float PI = 3.14159;
	 
	float area = PI * radius * radius;

	printf("The area of the circle with radius %.2f is %.2f\n", radius, area);
}