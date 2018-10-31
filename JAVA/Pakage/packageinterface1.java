package bikes;
public class packageinterface1 implements Bikes
{
  public void tiger()
  {
    System.out.println("Tiger is fast");
  }
  public void kawasaki()
  {
    System.out.println("kawasaki Is Agressive");
  }
  public static void main(String args[])
  {
      packageinterface1 obj=new packageinterface1();
      obj.tiger();
      obj.kawasaki();
  }
}
