public class p2
{
  public static void main(String args[])
  {
    try
    {
      System.out.println("Division"+5/0);
    }
    catch(ArithmeticException e)
    {
      System.out.println("Exception"+e.getMessage());
    }
    finally
    {
      System.out.println("In Finally");
    }
    System.out.println("Normal Flow");
  }
}
