class Set(x1:Int,y1:Int)
{
		var x:Int=x1;
		var y:Int=y1;

	def display(x2:Int,y2:Int)
	{
		x=x+x2;
		y=y+y2;
		println("x="+x+"y="+y);
	}
}

object second
{
	def main(ar:Array[String])
	{
		var  s=new Set(20,50);
		s.display(30,50);
	}
}
