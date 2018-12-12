class Animal
   {
    void eat()
   {System.out.println("animal");}
    }
    class Dog extends Animal{
    void eat()
    {System.out.println("dog");}
    }
    class BabyDog1 extends Dog{
    public static void main(String args[]){
    Animal a=new BabyDog1();
    a.eat();
    }
  }
