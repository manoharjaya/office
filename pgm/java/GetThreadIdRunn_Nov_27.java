class GetThreadIdRunn_Nov_27 implements Runnable
{
	public void run()	
	{
		System.out.println("current thread Name="+Thread.currentThread().getName()+"\t thread Id="+Thread.currentThread().getId());
	}
	public static void main(String... ad)
	{
		System.out.println("GetThreadIdRunn_Nov_27..");
		for(int i=0;i<5;i++)
		{
			Thread r1=new Thread(new GetThreadIdRunn_Nov_27());
			System.out.println("current ="+Thread.currentThread().getName());

			r1.start();
		}
	}
}
