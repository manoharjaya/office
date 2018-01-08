
import java.sql.*;

public class employee_csv
{
    public static void main(String[] args) 
    {
        System.out.println("hello");
        DBase db = new DBase();
        Connection conn = db.connect("jdbc:mysql://localhost:3306/manohar_jaya","pallavi","pallavi@123");
        db.importData(conn,args[0]);
    }
 
}
 
class DBase
{
    public DBase()
    {

    }
 
    public Connection connect(String db_connect_str,String db_userid, String db_password)
    {
        Connection conn;
        try
        {
            Class.forName("com.mysql.jdbc.Driver").newInstance();
            conn = DriverManager.getConnection(db_connect_str,db_userid, db_password);
        }
        catch(Exception e)
        {
            e.printStackTrace();
            conn = null;
        }
 
        return conn;    
    }
     
    public void importData(Connection conn,String filename)
    {
        Statement stmt;
        String query;
 
        try
        {
            stmt = conn.createStatement();
            query = "LOAD DATA LOCAL INFILE'"+filename+"' INTO TABLE employee_master(id,name,address,contact_no,designation)";
 
            stmt.executeUpdate(query);
                 
        }
        catch(Exception e)
        {
            e.printStackTrace();
            stmt = null;
        }
    }
}
