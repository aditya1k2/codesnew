package addition;
import java.util.Scanner;

public class Add
{
  public static void main(String []args)
  {
    Scanner in=new Scanner(System.in);
    int a,b,s;
    System.out.println("Enter a");
    a=in.nextInt();
    System.out.println("Enter b");
    b=in.nextInt();
    s=a+b;
    System.out.println("Sum is"+s);
  }
}
