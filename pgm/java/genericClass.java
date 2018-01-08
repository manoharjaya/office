class genericClass<GC>
{	
	GC value;
	void set(GC temp)
	{
		value=temp;	
	}
	GC print()
	{
		return value;
	}
	public static void main(String[] asd)
	{
		genericClass<Integer> tint=new  genericClass<Integer>();
		tint.set(new Integer(17));
		genericClass<String> tstr=new  genericClass<String>();	
		tstr.set(new String("hello"));
		
		
		System.out.println("generic class.. for str-->"+tstr.print());
		System.out.println("generic class.. for int-->"+tint.print());


		System.out.println();
	}
	
}
