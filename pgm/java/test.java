import java.io.*;
public class test {
	static int a=0;
	test()
	{
		System.out.println("test cons="+a);
	}
	private void display()
	{
		a++;
                System.out.println("test method="+a);
	}
        public static void main(String[] args) throws Exception {
   		test t1=new test();
		test t2=new test();
		t1.display();
		t2.display();
		System.out.println(test.a);
        }
}
