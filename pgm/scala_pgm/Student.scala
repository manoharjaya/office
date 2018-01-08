class Student(val name:String,val age:Int)
{
	var Name:String=name
	var Age:Int=age
	def display()
	{
		println("display is called..")
		println("Name="+Name+",Age="+Age)
	}
}
object callStudent
{
	def main(asdf:Array[String])
	{
		println("main method is called")
		val s1=new Student("Manohar",22)
		s1.display()
	}
}
