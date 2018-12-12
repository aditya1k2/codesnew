public class p3
{
  public static void main(String args[])
  {
    try
    {
      System.out.println("Division"+10/0);
    }
    catch(NullPointerException e)
    {
      System.out.println("Exception"+e.getMessage());
    }
    catch(ArithmeticException e)
    {
      System.out.println("Exception"+e.getMessage());
    }
    finally{
      System.out.println("In Finally");
    }
    System.out.println("Normal Flow");

  }
}
