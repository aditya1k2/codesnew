class swap{
	String a,b;
	float c,d;
	double e,f;
	char g,h;
	void swaps(String a,String b)
	{
		this.a=a;
		this.b=b;
		String temp;
		temp=a;
		a=b;
		b=temp;
		System.out.println("After Swapping:-\n"+ "a="+a+ "\n"+"b="+b);
	}
	void swaps(float c,float d)
	{
		this.c=c;
		this.d=d;
		float temp;
		temp=c;
		c=d;
		d=temp;
	}
	void swaps(double e,double f)
	{
		this.e=e;
		this.f=e;
		double temp;
		temp=e;
		e=f;
		f=temp;
	}
	void swaps(char g,char h)
	{
		this.g=g;
		this.h=h;
		char temp;
		temp=g;
		g=h;
		h=temp;
	}
	public static void main(String []args)
	{
		swap s=new swap();
		s.swaps("Aditya","Gupta");
	}
}
	