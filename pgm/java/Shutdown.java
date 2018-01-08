public class Shutdown
{
	public static void main(String ...a)
	{
		Runtime r=Runtime.getRuntime();
		r.addShutdownHook(new Thread(){
			public void run()
			{
				System.out.println("exit..");
			}
		});	
		System.out.println("Now press ctrl+c...");
		try
		{
			Thread.sleep(10000);
		}
		catch(InterruptedException ie)
		{
			ie.printStackTrace();
		}
	
	}
}
