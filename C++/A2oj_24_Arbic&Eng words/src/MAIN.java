
import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Scanner;
/**
 *
 * @author Abd El-Sattar
 */
public class MAIN {
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        int T,words,count;
        String word;
        boolean Check ; 
        T = in.nextInt();
        for(int i=0 ;i <T ;i++){
            words = in.nextInt();
            ArrayList <String> str = new ArrayList();
            Check = false;
            count=0;
            for(int j=0 ; j<words ; j++){
                word = in.next();
                if (!Check){ 
                  if(word.charAt(0)!='#' ){
                      Check = true;
                      str.add(0, word);
                      
                    }
                  else
                     str.add(word);
                }
                else{
                  str.add(count, word);
                   count++;
                }
               
            }
            
            for(int k=0 ; k<str.size()-1 ; k++){
                 System.out.print(str.get(k)+" ");
            }
             System.out.println(str.get(str.size()-1));
        }
        
    }
}
