#include <stdio.h>
#include <string.h>

struct Product {
    int id;
    char name[20];
    int quantity;
    double price;
};

void main() {
	
    struct Product p1, p2;

    p1.id = 201;
    strcpy(p1.name, "pen");
    p1.quantity = 5;
    p1.price = 55.50;

    printf("Details of 1st Product");
    
    printf("\n id = %d, name = %s, quantity = %d, price = %.2lf", p1.id, p1.name, p1.quantity, p1.price);

    printf("\nEnter the 2nd Product details\n");

    printf("Enter id = ");
    scanf("%d", &p2.id);

    printf("Enter name = ");
    scanf("%s", p2.name);

    printf("Enter quantity = ");
    scanf("%d", &p2.quantity);

    printf("Enter price = ");
    scanf("%lf", &p2.price);

    printf("\nDetails of 2nd Product");
    printf("\n id = %d, name = %s, quantity = %d, price = %.2lf", p2.id, p2.name, p2.quantity, p2.price);
}
