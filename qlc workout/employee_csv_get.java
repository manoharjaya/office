import java.sql.*;
import java.io.*;
public class employee_csv_get
{
    public static void main(String[] args)
    {
        String filename ="/home/manohar_jaya/get_employee_master.csv";
        try 
	{
            FileWriter fw = new FileWriter(filename);
	
            Class.forName("com.mysql.jdbc.Driver").newInstance();
            Connection conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/manohar_jaya","pallavi","pallavi@123");

            String query = "select * from employee_master";
            Statement stmt = conn.createStatement();
            ResultSet rs = stmt.executeQuery(query);

            while (rs.next())
 	    {
                fw.append(rs.getString(1));
                fw.append(',');
                fw.append(rs.getString(2));
                fw.append(',');
                fw.append(rs.getString(3));
                fw.append(',');
                fw.append(rs.getString(4));
		fw.append(',');		
		fw.append(rs.getString(5));
                fw.append('\n');
            }
            fw.flush();
            fw.close();
            conn.close();
            System.out.println("CSV File is created successfully.");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
