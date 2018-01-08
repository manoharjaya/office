import Array._
object Array_Range_Nov_3
{

	def main(asda:Array[String])
	{
		println("range")
		var l1=range(1,10,3)
		var l2=range(1,10,2)
		for(x <- l1)
			println("l1="+x)
		for(x <- l2)
			println("l2="+x)
	}
}
