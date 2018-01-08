import java.util.*;
import java.io.*;
import java.lang.*;
class GetThreadId_Nov_27 extends Thread
{
	public void  run()
	{	
 		System.out.println("current thread id="+Thread.currentThread().getId()+"\tThread Name="+Thread.currentThread().getName());
			
	}
	public static void main(String... as)
	{
		System.out.println("GetThreadId_Nov_27..");
		System.out.println("Enter the Input..");
 		Scanner in=new Scanner(System.in);
		int n=in.nextInt();
		for(int i=0;i<n;i++)
		{
	                GetThreadId_Nov_27 t1=new GetThreadId_Nov_27();
			t1.start();
		}
	}
}
