class genericType
{
	<T>void print(T[] arr)
	{
		//System.out.println(arr.length);	
		for(T eachele:arr)
		{
			System.out.println("each arr-->"+eachele);
		}
		System.out.println();
	}
	public static void main(String[] asd)
	{
		System.out.println("generic..");	
		genericType gt=new genericType();
		
		Integer a[]={10,25,35,45,55};
		gt.print(a);
		String str[]={"adsd","qwerty","zxcv"};
		gt.print(str);
		Double []d={23.0,34.5,57.37,22.77};
		gt.print(d);
		
	}
}
