import java.util.Scanner;
interface Motor
{
  int capacity=100;
  void run();
  void consume();
}
class WashingMachine implements Motor
{
  Scanner in=new Scanner(System.in);
  //System.out.println("Enter The Capacity Of tha Washing Manchine");
  //capacity=in.nextInt();
  public void run()
  {
    System.out.println("Washing Machine Is Running");
  }
  public void consume()
  {
    //System.out.println("Enter The Capacity Of tha Washing Manchine");
    //capacity=in.nextInt();
    System.out.println("Capacity"+" "+capacity);
  }
  public static void main(String []args)
  {
    WashingMachine obj=new WashingMachine();
    obj.run();
    obj.consume();
  }
}
