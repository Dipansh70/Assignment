# include <stdio.h>

void main() {
	char isstudent ='y';
	double price = 7000;
	double totalprice;
	if(isstudent =='y') {

		if(price > 5000) {
			totalprice = price - price *0.20;
		} else {
			totalprice = price - price * 0.10;
		}
	} else {
		if(price>6000)
			totalprice = price - price *0.15;

		else
			totalprice = price - price *0.10;
	}
	printf("The final prige %f",totalprice);
}