import java.util.*;
public class p4
{
  public static void main(String []args)
  {
    Scanner in=new Scanner(System.in);
    String s1;
    s1=in.nextLine();

    for(int i=0;i<s1.length();i++)
    {
      if(i%2!=0)
      System.out.println("Char at odd index is "+s1.charAt(i));
    }
  }
}
