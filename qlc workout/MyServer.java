import java.net.*;
import java.io.*;

public class MyServer
{
	
	public static void main(String abc[])
	{
		try
		{  
			ServerSocket ss=new ServerSocket(7899);  
			Socket s=ss.accept();//establishes connection   
			DataInputStream dis=new DataInputStream(s.getInputStream());  
			String str="";
			while(str!=null)
			{
				str=(String)dis.readUTF();  
			        System.out.println("message= "+str);  
			}
			  
			
			ss.close();  
		}
		catch(Exception e){System.out.println(e);}  
	}
}
