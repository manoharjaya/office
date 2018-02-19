import java.io.*;
class except
{
	boolean test()
	{
		return true;
	}
	static int print()
		{
			
			try
			{
				System.out.println("hello");
				int a=15/0;			
			
			System.out.println("inside try");
			return 250;
			}
			catch (Exception e) {
					System.out.println("dasd"+e);
			}
			/*
			finally      
			{
				System.out.println("finally");
				// System.exit(0);
				return 275;
			}
			
			// return 10; 
			// */
		System.out.println("check code..");
	return 20;	
	}
	
	public static void main(String[] args) {
		// System.out.println("test");
	//	System.out.println(new except());
		System.out.println(print());
	}
}
