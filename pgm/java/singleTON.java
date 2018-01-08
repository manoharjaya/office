import java.io.*;
public class singleTON
{
	private static singleTON obj;
	private singleTON()
	{}
	public static singleTON getSingleton()
	{
		if(obj==null)
		{
			obj=new singleTON();
			System.out.println("getSingletonInstance()");
		}
		return obj;
	}
	public void print()
	{
		System.out.println("print()");
	}
	public static void main(String[] a)
	{
		singleTON.getSingleton().print();
		singleTON.getSingleton().print();
		singleTON.getSingleton().print();

	}
}
