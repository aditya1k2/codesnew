import java.util.*;
class casechange
{
  public static void main(String args[])
  {
    Scanner in=new Scanner(System.in);
    String s1,s2;
    System.out.println("Enter a String in Lower Case");
    s1=in.nextLine();
    System.out.println("Enter a String in Upper Case");
    s2=in.nextLine();
    System.out.println("String 1 in UpperCase:-"+s1.toUpperCase());
    System.out.println("String 2 in LowerCase:-"+s2.toLowerCase());
  }
}
