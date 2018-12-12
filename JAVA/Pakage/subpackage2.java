//save on class subpackage2.java
import m1.m2.*;
class subpackage2{
  public static void main(String args[]){
   System.out.println("subpackage");
   //m1.m2.ClassP2 p=new m1.m2.ClassP2();
   m1.m2.subpackage1 p=new m1.m2.subpackage1();
   p.show2();

   m1.subpackage p1=new m1.subpackage();
   p1.show1();
  }
}
