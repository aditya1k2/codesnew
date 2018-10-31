import java.util.*;
public class p6
{
  public static void main(String []args)
  {
    Scanner in=new Scanner(System.in);
    String s1,s2;
    s1=in.nextLine();
    s2=in.nextLine();
    if(s1.compareTo(s2)==0)
    System.out.println("Strings are equal");
    else if(s1.compareTo(s2)<0)
    System.out.println("s2 is smaller");
    else if(s1.compareTo(s2)>0)
    System.out.println("s1 is greater");

  }
}
