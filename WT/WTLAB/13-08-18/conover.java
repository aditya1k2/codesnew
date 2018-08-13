class conover{
	int a;
	float b;
	conover(int a)
	{
		this.a=a;
		System.out.println(a);
	}
	conover(float b)
	{
		this.b=b;
		System.out.println(b);
	}
	public static void main(String []args){
		conover a=new conover(10);
	}
}