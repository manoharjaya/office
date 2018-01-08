class Sleepthread_Nov_27 implements Runnable
{
	public void run()
	{	
		try
		{
			for(int i=0;i<5;i++){
			//System.out.println("current thread..\t"+Thread.currentThread().getName());
			Thread.sleep(1500);
	        	System.out.println("        Run_27..\t"+Thread.currentThread().getName()+"\ti="+i);
			}
			System.out.println("outside");
			
		}
		catch(Exception e)
		{	
			e.printStackTrace();
		}
	}
	public static void main(String... ad)
	{
		System.out.println("Sleepthread_Nov_27..\t"+Thread.currentThread().getName());
		Thread r1=new Thread(new Sleepthread_Nov_27());
		r1.start();	
		Thread r2=new Thread(new Sleepthread_Nov_27());
		r2.start();
	}
}
