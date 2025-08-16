// return value and not arrgument passed 
int marks();
void main()
{
	int res = marks();
	printf("avg = %d" , res);
	 
}

int marks()
{
	int a = 78 , b = 79 , c = 67 , d = 90 , e = 78;
	int add = a+b+c+d+e;
	
	int avg = add / 5;
	
	return avg; 
}