import java.util.*;
public class p2
{
  public static void main(String []args)
  {
    Scanner in=new Scanner(System.in);
    String s1;
    s1=in.nextLine();
    char key;
    key=in.nextLine().charAt(0);
    int len;
    len=s1.length();
    for(int i=len-1;i>=0;i--)
    {
      if(s1.charAt(i)==key)
      System.out.println("ELement found at index "+i);
    }
  }
}
