import org.apache.spark.{SparkConf, SparkContext}
import org.apache.spark.SparkContext._
object WordCount
{
	def main(asda:Array[String]):Unit={
		
		println("hello manohar ..")

		val location="/home/manohar/Downloads/input/name.txt"

		val sparkconf = new SparkConf().setAppName("word count scala pgm")
		val sc = new SparkContext(sparkconf)
		val file = sc.textFile(location);

		val one = file.map((_,1));
		val reducedata = one.reduceByKey(_+_);
		reducedata.saveAsTextFile("/home/manohar/Downloads/output/");
	}
}
