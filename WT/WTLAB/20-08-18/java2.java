import java.io.*;
import java.util.Scanner;
class a1
{
	int a;
	a1()
	{
		a=5;
	}
	a1(int num)
	{
		a=num;
	}
	void display( a1 b,a1 c)
	{
		if(b.a>c.a)
		{
			System.out.println("Biggest value is "+b.a);
		}
		else
			System.out.println(c.a);
	}
	public static void main(String[]args)
	{
		Scanner in=new Scanner(System.in);
		System.out.println("Enter the value of a");
		int e=in.nextInt();
		a1 a=new a1(e);
		a1 b=new a1();
		b.display( a,b);
	}
}
		