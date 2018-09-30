import java.util.*;
class MyException extends Exception
{
    public MyException(String s)
    {
        super(s);
    }
}
class b{
  public   void ProcessInput(int a)
    {
      try
        {
          if(a<0)
            throw new MyException("Number is Negative");
            else
            {
                System.out.println("Value is: "+a);
            }
        }
        catch (MyException ex)
        {
            System.out.println(ex);
        }
    }
  }
  class c extends b{
      public static void main(String[]args)
      {
        Scanner in=new Scanner(System.in);
        int num=0;
        while(num!=-1)
        {
          b ab=new b();
          System.out.println("Enter the number");
          int a=in.nextInt();
           ab.ProcessInput(a);
           System.out.println("Enter -1 to leave");
           num=in.nextInt();
        }
      }
  }
