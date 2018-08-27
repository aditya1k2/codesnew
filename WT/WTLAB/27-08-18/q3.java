import java.io.*;
import java.util.Scanner;
class Student
{
	float p,c,m;
	Student()
	{
		p=0;c=0;m=0;
	}
	void getmarks()
	{
		Scanner in=new Scanner(System.in);
		System.out.println("Enter Marks Of Physics:-");
		p=in.nextInt();
		System.out.println("Enter Marks Of Chemistry:-");
		c=in.nextInt();
		System.out.println("Enter Marks Of Maths:-");
		m=in.nextInt();
	}
}
class Test extends Student
{
	float tot;
	Test()
	{
		tot=0;
	}
	void totalmarks()
	{
		tot=p+c+m;
		System.out.println("Total Marks="+tot);
	}
}
class Result extends Test
{
	float avg;
	Result()
	{
		avg=0;
	}
	void average()
	{
		avg=tot/3;
		System.out.println("Average Marks="+avg);
	}
	public static void main(String []args)
	{
		Result a=new Result();
		a.getmarks();
		a.totalmarks();
		a.average();
	}
}
		