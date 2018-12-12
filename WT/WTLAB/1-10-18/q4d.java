/*
import java.util.*;
class stringinsert
{
  public static void main(String args[])
  {
    Scanner in=new Scanner(System.in);
    String s1="My is Aditya";
    String s2="Name";
    s1.insert(3,s2);
    System.out.println(s2);
  }
}
*/
class stringinsert
{
public static void main (String[] args)
{
StringBuffer str1 = new StringBuffer ("My is ADITYA.");
String name = "name ";
str1.insert (3, name);
System.out.println (str1);
}
}
