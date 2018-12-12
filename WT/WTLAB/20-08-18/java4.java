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
	void add( a7 i,a7 b)
	{
		System.out.println("value is "+" "+(i.a+b.a));
	}
	void sub( a7 i,a7 b)
	{
		System.out.println("value is "+" "+(i.a-b.a));
	}
	void multi( a7 i,a7 b)
	{
		System.out.println("value is "+" "+(i.a*b.a));
	}
	void div( a7 i,a7 b)
	{
		System.out.println("value is "+" "+(i.a/b.a));
	}
	public static void main(String[]args)
	{
		Scanner in=new Scanner(System.in);
		System.out.println("Enter the value of a");
		int e=in.nextInt();
		System.out.println("Enter the value of a for basic operations");
		int f=in.nextInt();
		a7 a=new a7(e);
		a7 b=new a7(f);
		a7 c=new a7();
		System.out.println("Addition");
		c.add(a,b);
		System.out.println("Substraction");
		c.sub(a,b);
		System.out.println("Multipication");
		c.multi(a,b);
		System.out.println("Div");
		c.div(a,b);
	}
}
		