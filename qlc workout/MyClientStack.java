import java.net.*;
import java.io.*;
public class MyClientStack
{
	public static void main(String[] a)throws IOException
	{
		BufferedReader fromServer = null, fromUser = null;
		PrintWriter toServer = null;
		Socket sock = null;  
		String Usrmsg="";
		String Srvmsg="";
		 
		
		sock = new Socket("localhost",1986);
		
		
		fromServer = new BufferedReader(new InputStreamReader(sock.getInputStream()));
		fromUser = new BufferedReader(new InputStreamReader(System.in));
		
		toServer = new PrintWriter(sock.getOutputStream(),true);
		
		while (true)
		{
			System.out.print("Enter msg to server : ");
			Usrmsg = fromUser.readLine();
			if (Usrmsg==null || Usrmsg.equals("bye"))
			{
				toServer.println("bye");
				break;
			}
			else
			toServer.println(Usrmsg);
			Srvmsg = fromServer.readLine();
			System.out.println(Srvmsg);
		}
		fromUser.close();
		fromServer.close();
		toServer.close();
		sock.close();

	}
}
