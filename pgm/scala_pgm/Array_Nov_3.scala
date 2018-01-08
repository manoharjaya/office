object Array_Nov_3
{
	def main(dasdas:Array[String])
	{
		println("Array .. using iteration ")
		var myList = Array(1.9, 2.9, 3.4, 3.5)	
		for (x <- myList)
			println("x="+x)
		println("Using each index")
		for (i <- 0 to (myList.length-1))
			println("i="+myList(i))
	}
}
