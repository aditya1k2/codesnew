class staticpro{
	static int a;
	static void input(int b)
	{
		b=a;
	}
	void display()
	{
		System.out.println(a);
	}
	public static void main(String []args)
	{
		staticpro s=new staticpro();
		s.input(10);
		s.display();
	}
}
	