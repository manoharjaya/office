import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.*;
import java.text.DateFormat;
public class date_Nov_9
{
	public static void main(String[] asd)	
	{
	//SimpleDateFormat formatter = new SimpleDateFormat("dd/MM/yyyy");
	try {
		/*Date date = formatter.parse("31/03/2015");
		System.out.println("Date is: "+date);
		SimpleDateFormat formatter2 = new SimpleDateFormat("yyyy-MM-dd");
		String strDate= formatter2.format(date);  
    		System.out.println(strDate);  
*/


		List<Date> dates = new ArrayList<Date>();

		String str_date ="27/08/2010";
		String end_date ="02/09/2010";

		DateFormat formatter ; 

		formatter = new SimpleDateFormat("dd/MM/yyyy");
		Date  startDate = (Date)formatter.parse(str_date); 
		Date  endDate = (Date)formatter.parse(end_date);
		long interval = 24*1000 * 60 * 60; // 1 hour in millis
		long endTime =endDate.getTime() ; // create your endtime here, possibly using Calendar or Date
		long curTime = startDate.getTime();
		while (curTime <= endTime) {
		    dates.add(new Date(curTime));
		    curTime += interval;
		}
		for(int i=0;i<dates.size();i++){
		    Date lDate =(Date)dates.get(i);
		    String ds = formatter.format(lDate);    
		    System.out.println(" Date is ..." + ds);
		}
		
		
	    } catch (ParseException e) {e.printStackTrace();}
	}
}
