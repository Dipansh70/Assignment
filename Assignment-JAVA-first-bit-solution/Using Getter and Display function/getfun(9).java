class SalesManager
{
	int id;
	String name;
	double salary;
	double incentive;
	double target;
	void setID(int i)
	{
		this.id=i;
	}
	void setName(String n)
	{
		this.name=n;
	}
	void setSalary(double s)
	{
		this.salary=s;
	}
	void setIncentive(double inc)
	{
		this.incentive=inc;
	}
	void setTarget(double t)
	{
		this.target=t;
	}

	
	int getID()
	{
		return this.id;
	}
	String getName()
	{
		return this.name;
	}
	double getSalary()
	{
		return this.salary;
	}
	double getIncentive()
	{
		return this.incentive;
	}
	double getTarget()
	{
		return this.target;
	}


	void display()
	{
		System.out.println("\nId : "+this.id);
		System.out.println("Name : "+this.name);
		System.out.println("Salary : "+this.salary);
		System.out.println("Incentive : "+this.incentive);
		System.out.println("Target : "+this.target);
	}
}//SalesManager class ends here
class TestSalesManager
{
	public static void main(String[]args)
	{
		SalesManager s1,s2;
		s1=new SalesManager ();
		s2=new SalesManager ();

		s1.setID(5);
		s1.setName("Sahil");
		s1.setSalary(28000);
		s1.setIncentive(8000);
		s1.setTarget(100);

		s2.setID(10);
		s2.setName("Hemant");
		s2.setSalary(28000);
		s2.setIncentive(2000);
		s2.setTarget(50);

		
		if(s1.getIncentive()>s2.getIncentive())
		{
			System.out.println("s1 have more incentive");
		}
		else
		{
			System.out.println("s2 have more incentive");
		}

		s1.display();
		s2.display();
	}//main ends here
}//TestSalesManager ends here
		
	