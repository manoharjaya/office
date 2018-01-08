import java.net.*;
import java.io.*;
public class MyClient
{
	public static void main(String[] a)throws IOException
	{
		Socket s=new Socket("localhost",7899);  
		DataOutputStream dout=new DataOutputStream(s.getOutputStream()); 
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		String str="";
		while(!str.equals("stop"))
		{	
			str=br.readLine();
			dout.writeUTF(str); 
		}
		 
		dout.flush();  
		dout.close();  

		

		s.close();  
	}
}
