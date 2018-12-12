import java.util.Scanner;
abstract class Student
{
  int roll,reg;
  String course;
  abstract void  course();
}
class Kiitian extends Student
{
  void course()
  {
    Scanner in=new Scanner(System.in);
    System.out.println("Enter Course");
    course=in.nextLine();
    System.out.println("Enter Roll");
    roll=in.nextInt();
    System.out.println("Enter Reg");
    reg=in.nextInt();


  }
  void display()
  {
    System.out.println("Deatils Of the Student is:-");
    System.out.println("Roll"+" "+roll);
    System.out.println("Reg"+" "+reg);
    System.out.println("Course"+" "+course);
  }
  public static void main(String []args)
  {
    Kiitian a=new Kiitian();
    a.course();
    a.display();
  }
}
