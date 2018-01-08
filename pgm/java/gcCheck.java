import java.lang.Object.*;
public class gcCheck
{
	gcCheck()
	{
		System.out.println("cons..");
	}
	public static void main(String... a)
	{
		System.out.println("gc check..");
		gcCheck g1=new gcCheck();
		gcCheck g2=new gcCheck();
		System.out.println("g1="+g1);
		System.out.println("g2="+g2);
		g1=null;
		g2=null;
		System.out.println("after g1 =null"+g1);
		System.out.println("after g2 =null"+g2);
						
	}
}
