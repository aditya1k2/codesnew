class circle{
	float radius;
	float pi;
	float area;
	circle(float radius,float pi){
		this.radius=radius;
		this.pi=pi;
	}
	void display()
	{
		area=2*pi*radius;
		System.out.println(area);
	}
	public static void main(String []args)
	{
		circle c=new circle(2.5f,3.14f);
		c.display();
	}
}