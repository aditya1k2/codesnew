import java.util.*;
public class p6
{
  public static void main(String agrs[])
  {
    Scanner in=new Scanner(System.in);
    int balance,withdrawal;
    balance=in.nextInt();
    withdrawal=in.nextInt();
    if(balance<withdrawal)
      throw new ArithmeticException("Insufficient Balance");
    balance=balance-withdrawal;
    System.out.println("Balance Amount:-"+balance);

  }
}