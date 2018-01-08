object For_Yield_Nov_2
{
	def main(dsda:Array[String])
	{	
		 println("yield ..")

		var a:Int=0
		var b:Int=0
		var y=for{a <- 1 to 10 if a!=2 ; if a!=4 ; if a!=6 ; if a!=8; if a!=10}yield a
		for (a <- y)
		{
			println("a="+a)
		}
	/*
		var a = 0;
      val numList = List(1,2,3,4,5,6,7,8,9,10);

      // for loop execution with a yield
      var retVal = for{ a <- numList if a != 3; if a < 8 }yield a

      // Now print returned values using another loop.
      for( b <- retVal){
         println( "Value of a: " + b );
      }	
*/	
	}
}
