class student{
	String name;
	int roll;
	String sec;
	String branch;
	float cgpa;
	void input(String name,int roll,String sec,String branch,float cgpa){
		this.name=name;
		this.roll=roll;
		this.sec=sec;
		this.branch=branch;
		this.cgpa=cgpa;
	}
	void display()
	{
		System.out.println(name);
		System.out.println(roll);
		System.out.println(sec);
		System.out.println(branch);
		System.out.println(cgpa);
	}
	public static void main(String []args)
	{
		student s1=new student();
		s1.input("Aditya",291,"it4","it",8.69f);
		s1.display();
}}