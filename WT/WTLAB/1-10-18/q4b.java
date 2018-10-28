/*import java.util.Scanner;
class reverse
{
  public static void main(String args[])
  {
    Scanner in=new Scanner(System.in);
    String s1;
    String s2= "";
    System.out.println("Enter a String to Reverse");
    s1=in.nextLine();
    for(int i=(s1.length())-1;i>=0;i--)
    {
        s2=s2+s2.charAt(i);
    }
    System.out.println("Reversed String is:-"+s2);
  }
}
*/


import java.util.Scanner;
class ReverseString
{
    public static void main(String[] args)
    {
        System.out.println("Enter string to reverse:");

        Scanner read = new Scanner(System.in);
        String str = read.nextLine();
        String reverse = "";
        for(int i = str.length() - 1; i >= 0; i--)
        {
            reverse = reverse + str.charAt(i);
        }

        System.out.println("Reversed string is:");
        System.out.println(reverse);
    }
}
