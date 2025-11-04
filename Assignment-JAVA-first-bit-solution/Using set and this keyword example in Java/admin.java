class SalesManager
{
	int id;
	String name;
	double salary;
	double incentive;
	double target;

	void setID(int i){
		this.id = i;
	}
	void setName(String n){
		this.name = n;
	}
	void setSalary(double s){
		this.salary = s;	
	}
	void setIncentive(double i){
		this.incentive = i;
	}
	void setTarget(double t){
		this.target = t;
	}
}//sales manager info store here 
class MangerInf0
{
	public static void main(String[] args){
		SalesManager s1;
		s1 = new SalesManager();

		s1.setID(102);
		s1.setName("Rahul");
		s1.setSalary(2000.0);
		s1.setIncentive(300.50);
		s1.setTarget(100);

	System.out.println("ID is : " + s1.id);
	System.out.println("Name is : " + s1.name);
	System.out.println("Salary is : " + s1.salary);
	System.out.println("Incentive is : " + s1.incentive);
	System.out.println("Target is : " + s1.target);
	}//main ends here
}//info store here 