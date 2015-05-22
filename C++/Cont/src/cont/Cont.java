/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package cont;

import java.sql.*;
import javax.swing.*;
/**
 *
 * @author Abd El-Sattar
 */
public class Cont {

    public static Connection conn = null;
    public static ResultSet rs = null;
     public static PreparedStatement pst = null;
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
             try {
            
                Class.forName("com.mysql.jdbc.Driver").newInstance();
                conn = DriverManager.getConnection("jdbc:mysql://localhost:330/mysql?zeroDateTimeBehavior=convertToNull", "root", "M@hammed512");
               Statement stmt=conn.createStatement();
                // the mysql insert statement
               String query = " INSERT INTO `socialnetwork`.`post` (`post_id`, `content`, `Time`, `owner_id`, `post_type`, `type_id`)"+
                       " VALUES (?, ?, ?,?, ?, ?);";
 
                // create the mysql insert preparedstatement
                PreparedStatement preparedStmt = conn.prepareStatement(query);
                preparedStmt.setString (1,"1");
                preparedStmt.setString (2,"asdf asdf");
                preparedStmt.setString(3,"12:5");
                preparedStmt.setString (4,"1");
                preparedStmt.setString (5,"public");
                preparedStmt.setString(6,"null");

                // execute the preparedstatement
                preparedStmt.execute();


                          System.out.println("************************  !");

                   conn.close();
                   }   catch (Exception ex) {System.out.println(ex ); }
        
    }
    
}
