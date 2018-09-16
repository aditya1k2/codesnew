import java.io.*;
import java.util.Scanner;
class a7
{
	int a;
	a7()
	{
		a=5;
	}
	a7(int num)
	{
		a=num;
	}
	a7( a7 f)
	{
		a=f.a;
	}
	void display()
	{
			System.out.println("value is "+" "+a);
	}
	public static void main(String[]args)
	{
		Scanner in=new Scanner(System.in);
		System.out.println("Enter the value of a");
		int e=in.nextInt();
		a7 a=new a7(e);
		a7 b=new a7();
		a7 c=new a7(b);
		a.display();
		b.display();
		c.display();
	}
}
		