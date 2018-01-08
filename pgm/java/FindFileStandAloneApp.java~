/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

import java.io.File;
import java.io.FilenameFilter;
import java.io.IOException;
import java.util.ArrayList;
/**
 *
 * @author manohar
 */
public class FindFileStandAloneApp {

    
    public static void main(String[] args) throws IOException {
//         FindFileStandAloneApp fs = new FindFileStandAloneApp();
//        Scanner scan = new Scanner(System.in);
//        System.out.println("Enter the file to be searched.. " );
//        String name = scan.next();
//        System.out.println("Enter the directory where to search ");
//        String directory = scan.next();
//        fs.findFile(name,new File(directory));
        ArrayList<String> listOfFiles=new ArrayList<>();
        
        
        
           File dir = new File("http://test.applog.fieldsense.in/");
      FilenameFilter filter = new FilenameFilter() {
         public boolean accept (File dir, String name) { 
            return name.startsWith("Debug_Log_"+"76_"+"20170902");
//              return name.startsWith("Debug_Log_");
             
         } 
      }; 

	try
	{
	      String[] children = dir.list(filter);
	      if (children == null) {
		 System.out.println("Either dir does not exist or is not a directory"); 
	      } 
		else { 
		 for (int i=0; i< children.length; i++) {
		    String filename = children[i];
		    listOfFiles.add(filename);
		    System.out.println(filename);
		 } 
	      } 				
	}
	catch(Exception e){
		System.out.println("errorsds"+e);	
	}
    


}

    
 
    
//    private void findFile(String name, File file1) throws IOException {
//         File[] list = file1.listFiles();
//        if(list!=null)  
//        {                          
//        for(File file2 : list)
//        {            
//            if (file2.isDirectory())
//            {
//                findFile(name,file2);             
//            }
//            else if (name.equalsIgnoreCase(file2.getName()))
//            {                                                              
//                System.out.println("Found");                
//                System.out.println("File found at : "+file2.getParentFile());
//                System.out.println("Path diectory: "+file2.getAbsolutePath());
//                String p1 = ""+file2.getParentFile();
//                File f2 = new File(p1);
//                
//                Desktop.getDesktop().open(f2);                               
//            }                      
//        }        
//      }
//         
//    }
//    
}

