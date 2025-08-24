  //return type not arrgument passed;
  int swap();
void main()
{
	int res = swap(); // store return value
    printf("Returned value after swap = %d\n", res);	
}

	int swap(){
	int a = 10;
	int b = 20;
	int temp;
			
	temp = a;
	a =b ;
	b = temp;
	
	 printf("After swap: a = %d, b = %d\n", a, b);
	return temp;
	
}