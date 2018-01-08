class Jointhread_Nov_2 implements Runnable
{
	public void run()
	{	
                System.out.println("run\t"+Thread.currentThread().getName());
		
	}
	public static void main(String... asda)
	{
		System.out.println("join thread.."+Thread.currentThread());
		Thread r1=new Thread(new Jointhread_Nov_2());
		Thread r2=new Thread(new Jointhread_Nov_2());
		Thread r3=new Thread(new Jointhread_Nov_2());

		r1.start();
		
		r2.start();
		
		r3.start();
	}		
}
		
