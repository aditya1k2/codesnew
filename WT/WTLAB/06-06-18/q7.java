class check{
  public static void main(String []args){
    int num=1780;
    if(num>=0 && num<=9)
      System.out.println("Num is a one digit number");
      else if(num>=10 && num<=99)
        System.out.println("Num is a two digit number");
      else if(num>=100 && num<=999)
        System.out.println("Num is a three digit number");
      else if(num>=1000 && num<=9999)
        System.out.println("Num is a four digit number");
  }
}
