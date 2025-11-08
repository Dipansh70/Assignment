class Employee 
{
 	int id;
	String name;
	double salary;

	void setId( int i){
		this.id = i;
	}
	void setName(String str){
		this.name = str;
	}
	void setSalary(double s){
		this.salary = s; 
	}
}//feel employee detail 

class Einformation 
{
	public static void main(String[] args){

	Employee e1;
	e1 = new Employee();
	
	e1.setId(1);
	e1.setName("Dipanshu");
	e1.setSalary(3000.0);

	System.out.println("Id is : " + e1.id);
	System.out.println("Name is : " + e1.name);
	System.out.println("Salary is : " +e1.salary);
	}//main ends here  
}//emplyoee information feel up 