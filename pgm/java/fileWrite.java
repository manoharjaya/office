import java.io.*;
class fileWrite
{
	public static void main(String... asdasd)throws Exception
	{
		File f=new File("/home/manohar/testDir1/hello.txt");
		FileWriter fw=new FileWriter(f);
		fw.write("hello siddhesh");
		fw.close();
	}
}
