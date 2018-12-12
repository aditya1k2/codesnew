class calculator{
  public static void main(String []args){
    char val='+';
    int a=10;
    int b=100;
    switch(val){
      case '+':{
        int c=a+b;
        System.out.println(c);
        break;
      }
      case '-':{
        int c=a-b;
        System.out.println(c);
        break;
      }
    case '*':{
        int c=a*b;
        System.out.println(c);
        break;
      }
      case '/':{
        int c=a/b;
        System.out.println(c);
        break;
      }
      default:{
        System.out.println("Opeation cannot be performed");
      }
    }
  }
}
