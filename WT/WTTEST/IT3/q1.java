class Bike{
     int speedlimit=90;
     float speedlimit1=150;
    }
    class Honda3 extends Bike{
     int speedlimit=150;
      float speedlimit1=90;
     public static void main(String args[]){
      Bike obj=new Honda3();
      System.out.println(obj.speedlimit);
      System.out.println(obj.speedlimit1);
    }
}
