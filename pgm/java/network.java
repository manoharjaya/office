import java.io.*;
class network implements java.io.Serializable
{
	int id;
	String name;	
	network(int id,String name)
	{
		this.id=id;
		this.name=name;		
	}
	public static void main(String[] adad)throws Exception
	{
		network n=new network(7,"manohar");
		
		FileOutputStream fout=new FileOutputStream("/home/manohar/Desktop/pgm/java/network.ser");
		ObjectOutputStream out=new ObjectOutputStream(fout);
		
		out.writeObject(n);
		out.close();
		
		FileInputStream fin=new FileInputStream("/home/manohar/Desktop/pgm/java/network.ser");
		ObjectInputStream oin=new ObjectInputStream(fin);
		
		network ntemp=(network)oin.readObject();
	
		System.out.println("id="+ntemp.id+"\nname="+ntemp.name);
	}
}
