import java.io.*;
public class singleThread extends Thread 
{
	public void run()
	{
		try
		{
			int idx=0;
			for(idx=1;idx<5;idx++)
			{
                         Thread.sleep(1500);
 			 System.out.println("idx= "+idx);
			}
			System.out.println("hello...");
		}
		catch(InterruptedException e)
		{
			e.printStackTrace();
		}
		
	}
	public static void main(String []a)
	{
		singleThread t1=new singleThread();
		t1.start();
	/*	try
		{
		 t1.join();
		}
		 catch(InterruptedException e)
                {
                        e.printStackTrace();
                }

		singleThread t2=new singleThread();
		t2.start();
		 singleThread t3=new singleThread();
                t3.start();
	*/	
	}
}
