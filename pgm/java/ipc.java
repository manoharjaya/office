import java.util.Scanner;
public class ipc
{
    public static void main(String[] args)throws InterruptedException
    {
        final PC pc = new PC();
        // Create a thread object that calls pc.produce()
        Thread t1 = new Thread(new Runnable()
        {
            @Override
            public void run()
            {
                try
                {
		    System.out.println(" 1   Inside t1 run() thread 0="+Thread.currentThread().getName());  // Thread-0
                    pc.produce();
                }
                catch(InterruptedException e)
                {
                    e.printStackTrace();
                }
            }
        });
 
        // Create another thread object that calls
        // pc.consume()
        Thread t2 = new Thread(new Runnable()
        {
            @Override
            public void run()
            {
                try
                {
		    System.out.println("2  Inside t2 run() thread 1="+Thread.currentThread().getName());  // Thread-1
                    pc.consume();
                }
                catch(InterruptedException e)
                {
                    e.printStackTrace();
                }
            }
        });
 
        // Start both threads
        t1.start();
        t2.start();
 
        // t1 finishes before t2
     //   t1.join();
      //  t2.join();
    }
 
    // PC (Produce Consumer) class with produce() and
    // consume() methods.
    public static class PC
    {
        // Prints a string and waits for consume()
        public void produce()throws InterruptedException
        {
            // synchronized block ensures only one thread
            // running at a time.
            synchronized(this)
            {
                System.out.println("  3   producer thread should equals to thread -0 "+Thread.currentThread().getName());
 
                // releases the lock on shared resource
                wait();  //t1 is wait
 		System.out.println(" 8  after wait()= thread 0 "+Thread.currentThread().getName());  // Thread-0
                    
                // and waits till some other method invokes notify().
                System.out.println(" 9  Resumed thread 0="+Thread.currentThread().getName());
            }
        }
 
        // Sleeps for some time and waits for a key press. After key
        // is pressed, it notifies produce().
        public void consume()throws InterruptedException
        {
            // this makes the produce thread to run first.
            System.out.println("  4  consumer thread should equals to thread 1 ="+Thread.currentThread().getName());  // Thread-1
            Thread.sleep(1000);
            Scanner s = new Scanner(System.in);
 
            // synchronized block ensures only one thread
            // running at a time.
            synchronized(this)
            {
                System.out.println(" 5  Waiting for return key. thread 1  "+Thread.currentThread().getName()); //thread-1
                s.nextLine();
	//	System.out.println("nextLine()="+s.nextLine());
                System.out.println(" 6  Return key pressed thread 1 "+Thread.currentThread().getName()); //thread-1 
 
                // notifies the produce thread that it
                // can wake up.
                notify();
 		System.out.println(" 7  after notify() thread 1 ="+Thread.currentThread().getName());  // Thread-1
                    
                // Sleep
                Thread.sleep(2000);
            }
        }
    }
}
