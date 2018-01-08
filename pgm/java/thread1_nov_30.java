class thread1_nov_30 implements Runnable
{
	public void run()	
	{
		try
		{
			for(int i=0;i<5;i++)
			{
                        	//System.out.println(""+Thread.currentThread().getName()+" before sleep ");
				Thread.sleep(500);
            	        	System.out.println(""+Thread.currentThread().getName()+" after sleep i="+i);
			}
		}
		catch(Exception e)
		{
			System.out.println("e------"+e);
		}
	}
	public static void main(String... asd)
	{
		System.out.println("thread1_nov_30="+Thread.currentThread().getName());
			Thread r1=new Thread(new thread1_nov_30());
			r1.setName("t1");
	                r1.start();	
			try
			{
				r1.join(1500);
			}
			catch(Exception e)
			{	
				System.out.println("e------"+e);
			}
			Thread r2=new Thread(new thread1_nov_30());
                        r2.setName("t2");

			r2.start();
			Thread r3=new Thread(new thread1_nov_30());
                        r3.setName("t3");

			r3.start();

	}
		
}
