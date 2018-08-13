class areacal
{
	int l,b;
	float r;
	void area(int l,int b)
	{
	this.l=l;
	this.b=b;
	int areaa=l*b;
	System.out.println("Area Of Rectangle:-"+areaa);
	}
	void area(int l)
	{
	this.l=l;
	int areaa=l*l;
	System.out.println("Area Of Rectangle:-"+areaa);
	}
	void area(float r)
	{
	this.r=r;
	
	float areaa=3.14f*r*r;
	System.out.println("Area Of Rectangle:-"+areaa);
	}
	public static void main(String []args){
		areacal a=new areacal();
		a.area(5,5);
	}
}

	
	
	