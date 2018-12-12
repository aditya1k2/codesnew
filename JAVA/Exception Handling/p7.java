import java.util.*;
public class p7
{
  public static void main(String agrs[])
  {
    Scanner in=new Scanner(System.in);
    int balance,withdrawal;
    balance=in.nextInt();
    withdrawal=in.nextInt();
    try{
    if(balance<withdrawal)
      throw new ArithmeticException("Insufficient Balance");
    balance=balance-withdrawal;
    System.out.println("Balance Amount:-"+balance);
  }
  catch(ArithmeticException e)
  {
    System.out.println("Exception:-"+e.getMessage());
  }
  System.out.println("Normal Flow");

  }
}
