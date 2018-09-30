import java.io.*;
import java.io.*;
class a{
  public static void main(String[] args)
    {
        try{int ar[] = {1, 2, 3, 4, 5};
        for (int i=0; i<=ar.length; i++)
          System.out.println(ar[i]);}
          catch(Exception e)
          {
            System.out.println("Error Managed By Exception Class");
          }
          catch(Throwable e)
          {
            System.out.println("Managed By Throwable");
          }
    }
}
