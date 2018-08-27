import java.io.*;
import java.util.Scanner;
class Account
{
	int p,r,t;
	Account(int p,int r,int t)
	{
		this.p=p;this.r=r;this.t=t;
	}
	void getprt()
	{
			Scanner in=new Scanner(System.in);
			System.out.println("Enter the value of p");
			p=in.nextInt();
			System.out.println("Enter the value of r");
			r=in.nextInt();
			System.out.println("Enter the value of t");
			t=in.nextInt();
	}
}
class Interest extends Account
{
	int si;
	Interest()
	{
		si=0;
	}
	void calculate()
	{
		si=(p*r*t)/100;
		System.out.println("Si is"+si);
	}
	public static void main(String []args)
	{
		Interest a=new Interest();
		a.getprt();
		a.calculate();
	}
}
