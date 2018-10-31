public class p5
{
  public static void main(String args[])
  {
    try
    {
      System.out.println("Division"+5/0);
    }
    catch(Exception e)
    {
      System.out.println("Exception"+e.getMessage());
    }
    finally{
      System.out.println("In Finally Block");
    }
  }
}
