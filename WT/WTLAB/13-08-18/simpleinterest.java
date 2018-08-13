class simpleinterest{
	float p,r,t;
	float si;
	simpleinterest(float p,float r,float t)
	{
			this.p=p;
			this.r=r;
			this.t=t;
	}
	void si()
	{
		si=(p*r*t)/100;
	}
	void display()
	{
		System.out.println(si);
	}
	public static void main(String []args)
	{
		simpleinterest s1=new simpleinterest(10.2f,11.3f,25.6f);
		s1.si();
		s1.display();
	}
}
		
		
		