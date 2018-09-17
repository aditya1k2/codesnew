import java.util.Scanner;
interface all
{
  void earning();
  void deductions();
  void bonus();
}
class Manager implements all
{
  Scanner in=new Scanner(System.in);
  int basic;
  float da,hra,pf;
  float bonus1;
  public void earning()
  {
    System.out.println("Enter basic salary");
    basic=in.nextInt();
    da=(0.08f*basic);
    hra=(0.15f*basic);
  }
  public void deductions()
  {
    pf=(0.12f*basic);
  }
  public void bonus()
  {
    bonus1=(0.50f*basic);
  }
}
class Substaff extends Manager
{
  float tot;

  void display()
  {
    tot=basic+da+hra;
    System.out.println("Total earning="+" "+tot);
    System.out.println("deduction="+pf);
    System.out.println("Bonus="+bonus1);
  }
    public static void main(String []args)
    {
      Substaff obj=new Substaff();
      obj.earning();
      obj.deductions();
      obj.bonus();
      obj.display();
    }
 }
