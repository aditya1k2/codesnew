class A
{
  void hello()
  {
    System.out.println("HELLO From A");
  }
}
class B extends A
{
    void hello()
    {
      System.out.println("Hello From B");
    }
    public static void main(String []args)
    {
      A obj=new B();
      obj.hello();
    }
}
