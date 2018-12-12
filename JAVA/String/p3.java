import java.util.*;
public class p3
{
  public static void main(String []args)
  {
    Scanner in=new Scanner(System.in);
    String s1;
    s1=in.nextLine();
    int len;
    len=s1.length();
    System.out.println("Char at index first is "+s1.charAt(0));
    System.out.println("Char at index last is  "+s1.charAt(len-1));
  }
}
