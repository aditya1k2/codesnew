import java.util.*;
public class p5
{
  public static void main(String []args)
  {
    Scanner in=new Scanner(System.in);
    String s1;
    s1=in.nextLine();
    int count=0;
    char key;
    key=in.nextLine().charAt(0);
    for(int i=0;i<s1.length();i++)
    {
      if(s1.charAt(i)==key)
        count++;
    }
    System.out.println("Frequency of "+key+":-"+count);
  }
}
