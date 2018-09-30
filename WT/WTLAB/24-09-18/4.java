import java.util.*;
import java.util.Scanner;
class a{
  public static void main(String[]args)
  {
    Scanner in=new Scanner(System.in);
    int j;
    System.out.println("Enter value of divident");
    int a1=in.nextInt();
    System.out.println("Enter value of divisor");
    int b=in.nextInt();
    try{
        float c=a1/b;
        System.out.println("Value is:"+c);
      }
      catch(Exception e)
      {
        j=0;
        System.out.println("Error Managed");
      }
      finally
      {
        System.out.println("Want a Second Chance??");
        String e=in.nextLine();
        String d=in.nextLine();
        if(d.equals("NO") ||d.equals("no"))
        {
          System.out.println("Thank u");
          System.exit(0);
        }
        else{
          System.out.println("Enter value of divident");
           a1=in.nextInt();
          System.out.println("Enter value of divisor");
           b=in.nextInt();
           float c=a1/b;
           System.out.println("Value is:"+c);
        }
    }
      }
      }
