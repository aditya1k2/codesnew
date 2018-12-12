import java.io.*;
import java.util.Scanner;
class Employee
{
	int basic;
	void getbasic()
	{
		Scanner in=new Scanner(System.in);
		System.out.println("Enter the basic Salary:-");
		basic=in.nextInt();
	}
}
class Erning extends Employee
{
	float ta,da,hra;
	Erning()
	{
		ta=0;da=0;hra=0;
	}
	void allowances()
	{
		ta=(3*basic)/100;
		da=(5*basic)/100;
		hra=(7*basic)/100;
	}
}
class Income extends Erning
{
	float gross_sal;
	Income()
	{
		gross_sal=0;
	}
	void total()
	{
		gross_sal=ta+da+hra+basic;
		System.out.println("Total Salary="+gross_sal);
	}
	public static void main(String []args)
	{
		Income a=new Income();
		a.getbasic();
		a.allowances();
		a.total();
	}
}
