import java.net.*;
import java.io.*;

public class MyServerStack extends Thread 
{
	  private ServerSocket listener;
	public  BufferedReader fromClient = null;
	public  OutputStreamWriter toClient = null;
	public  Socket client = null;
	
	  public MyServerStack(int port) throws IOException 
	  {
	    listener = new ServerSocket(port);
	  }

	  public void run()
	  {
	    while(true)
            {
	          	try 
			{
				
				System.out.println("Server Ready");
				client = listener.accept();
				System.out.println("Client Connected");
				fromClient = new BufferedReader(new InputStreamReader(client.getInputStream()));
				toClient = new OutputStreamWriter(client.getOutputStream());
				String line;
				while (true)
				{
					line = fromClient.readLine();
					if ( (line == null) || line.equals("bye"))
					break;
					System.out.println ("Client [ " + line + " ]");
					toClient.write("Server [ "+ line +" ]\n");
					toClient.flush();
				}
				 try{Thread.sleep(15000);}catch(InterruptedException e){System.out.println(e);}  
				
				fromClient.close();
				toClient.close();
				client.close();
				listener.close();
				System.out.println("Client Disconnected");
	      		}
	      		catch(IOException e)
		        {
			e.printStackTrace();
		        }
	    }
	  }

	  public static void main(String[] args) {
	    int port = 1986;
    			try 
			{
			      Thread t = new MyServerStack(port);
			      t.start();
			            Thread t1 = new MyServerStack(port);
			      t1.start();
						
			}
			catch(IOException e)
			{
	      		      e.printStackTrace();
	                }  
	  }
}
