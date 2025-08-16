// retunr value and not arrgument passed
int average();
void main()
{
		int res = average();
		printf("average %d" , res);
}

int average(){
	int a =  300 , b = 290 , c = 450 , d = 300 , e = 340;
	int  value = a+b+c+d+e;
	int avg = value / 5;
	
	return avg;
}