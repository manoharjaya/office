abstract class thread2_dec_1
{
/*
	public void run()
	{
		try
		{
			Thread.sleep(1500);
		}
		catch(Exception e)
		{	
	                System.out.println(e);
		}
                System.out.println("thread1="+Thread.currentThread().getName());
	}  */
	public static void main(String... sdas)
	{
		System.out.println("thread2_dec_1="+Thread.currentThread().getName());
		Thread r1=new Thread(new Runnable(){
		public void run()
       		{
                	try
                	{
                        	Thread.sleep(1500);
                	}
                	catch(Exception e)
                	{       
                        	System.out.println(e);
                	}
                	System.out.println("thread1="+Thread.currentThread().getName());
        	}
		});
		r1.start();
		Thread r2=new Thread(new Runnable(){
                public void run()
                {
                        try
                        {
                                Thread.sleep(1500);
                        }
                        catch(Exception e)
                        {
                                System.out.println(e);
                        }
                        System.out.println("thread2="+Thread.currentThread().getName());
                }
                });
                r2.start();

	}
}
