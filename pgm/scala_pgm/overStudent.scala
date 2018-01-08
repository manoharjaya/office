class College(val college_name:String,val course_name:String)
{
	var college_Name:String=college_name
	var course_Name:String=course_name
	var state:String="TN"
	def display()
	{
		println("college_Name="+college_Name+",course_Name="+course_Name)
	}
	println("college super constructor")
}
class Student(val student_name:String,override val college_name:String,override val course_name:String,val sub_code:Int) extends College(college_name,course_name)
{
	
	var Student_Name:String=student_name
	var Sub_Code:Int=sub_code
	override def display()
	{
		println("display is called..")
		println("Student_Name="+Student_Name+",Subcode="+Sub_Code+",college_Name="+college_Name+",course_Name="+course_Name+",state="+state)
	}

}
object overStudent
{
	def main(asdf:Array[String])
	{
		println("main method is called")
		val s1=new Student("Manohar","DGCT","cse",102)
		s1.display()
	}
}

