import java.net.*;
import java.io.*;
public class multiserver 
{

	  // The server socket.
	  private static ServerSocket serverSocket = null;
	  // The client socket.
	  private static Socket clientSocket = null;

	  // This chat server can accept up to maxClientsCount clients' connections.
	  private static final int maxClientsCount = 10;
	  private static final clientThread[] threads = new clientThread[maxClientsCount];

	  public static void main(String args[])
	 {

	    // The default port number.
	    int portNumber = 6791;
	    	
	    /*
	     * Open a server socket on the portNumber (default 2222). Note that we can
	     * not choose a port less than 1023 if we are not privileged users (root).
	     */
	    	try
	 	{
	 	     serverSocket = new ServerSocket(portNumber);
		}
	 	catch (IOException e)
	 	{
	      	      System.out.println(e);
                }

	    /*
	     * Create a client socket for each connection and pass it to a new client
	     * thread.
	     */
	    	while (true) 
		{
		      	try
			 {
				clientSocket = serverSocket.accept();
				int i = 0;
				for (i = 0; i < maxClientsCount; i++) 
				{
					  if (threads[i] == null)
					 {
						System.out.println("6h262652dasdas");
					    (threads[i] = new clientThread(clientSocket, threads)).start();
                                                System.out.println(threads[i]);
					    break;
					  }
				}
				if (i == maxClientsCount)
				 {
				  PrintStream os = new PrintStream(clientSocket.getOutputStream());
				  os.println("Server too busy. Try later.");
				  os.close();
				  clientSocket.close();
				}
			} 
			catch (IOException e)
			 {
				System.out.println(e);
			 }
	       }
	}
}
