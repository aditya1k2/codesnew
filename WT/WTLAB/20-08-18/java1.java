import java.io.*;
import java.util.Scanner;
class circle
{
	float r,pi;
	circle(float r1,float p1)
	{
		r=r1;
		pi=p1;
	}
	void display()
	{
		System.out.println("Area="+" "+(pi*r*r));
	}
	public static void main(String[]args)
	{
		Scanner in=new Scanner(System.in);
		System.out.println("Enter radius");
		float f1=in.nextFloat();
		System.out.println("Enter pi value");
		float p1=in.nextFloat();
		circle a=new circle(f1,p1);
		a.display();
	}
}                                                                                            