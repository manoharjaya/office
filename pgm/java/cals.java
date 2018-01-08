class cals
{
	int a=10,b=20,c;
	static int d=40;
	int  add()
	{
		c=a+b;
		return c+d;
	}
	public static void main(String asdasda[])
	{
		System.out.println("cals");
		cals c1=new cals();
		
		System.out.println(c1.add());
		System.out.println(Thread.currentThread());
                System.out.println(c1.a);
                System.out.println(d);
	}
}
