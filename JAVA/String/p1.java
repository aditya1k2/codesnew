public class p1
{
  public static void main(String []args)
  {
    String s1="Aditya";
    String s2="Aditya";
    String s3=new String("Aditya");
    if(s1==s2)
      System.out.println("String s1 and s2 are equal because s1 and s2 both are pointing to same string literal");
    if(s2.equals(s3))
      System.out.println("String s2 and s3 are equal because they have same string literal stored in it");


  }
}
