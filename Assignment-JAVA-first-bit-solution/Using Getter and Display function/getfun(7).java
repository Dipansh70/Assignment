class HR
{
	int id;
	String name;
	double salary;
	double commision;
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
	void setCommision(double c)
	{
		this.commision=c;
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
	double getCommision()
	{
		return this.commision;
	}

	void display()
	{
		System.out.println("\nId : "+this.id);
		System.out.println("Name : "+this.name);
		System.out.println("Salary : "+this.salary);
		System.out.println("Commision : "+this.commision);	
	}
}//HR class ends here
class TestHR
{
	public static void main(String[]args)
	{
		HR h1,h2;
		h1=new HR();
		h2=new HR();

		h1.setID(10);
		h1.setName("Amit");
		h1.setSalary(22300);
		h1.setCommision(3200);

		h2.setID(15);
		h2.setName("Pream");
		h2.setSalary(15000);
		h2.setCommision(8000);
		

		if(h1.getCommision()>h2.getCommision())
		{
			System.out.println("h1 has high commision");
		}
		else
		{
			System.out.println("h2 has high commision");
		}

		h1.display();
		h2.display();
	}//main ends here
}//TestHR ends here
		
	