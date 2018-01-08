class ananymous_obj
{
	ananymous_obj()
	{
		System.out.println("cons..");
	}
	public static void main(String ...dsd)
	{
		ananymous_obj a1=null;
		ananymous_obj a2=new ananymous_obj();
		System.out.println("a2 ="+a2);
		System.out.println("main.."+a1);
		System.out.println(new ananymous_obj());
		System.out.println(new ananymous_obj());

	}
}
