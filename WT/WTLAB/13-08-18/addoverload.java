class addoverload{
	int a,b,c,sum;
	void sum(int a,int b)
	{
		this.a=a;
		this.b=b;
		sum=a+b;
		System.out.println(sum);
	}
	void sum(int a,int b,int c)
	{
		this.a=a;
		this.b=b;
		this.c=c;
		sum=a+b+c;
		System.out.println(sum);
	}
	public static void main(String []args)
	{
		addoverload a=new addoverload();
		a.sum(1,2);
		a.sum(5,10,15);
	}
}
		
	