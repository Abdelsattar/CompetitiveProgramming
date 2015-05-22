
import java.util.ArrayList;
import java.util.Scanner;
import java.util.Vector;


/**
 *
 * @author Abd El-Sattar
 */
public class Main {
      public static void main (String args[]){
          Scanner in= new Scanner (System.in);
          int testCases, numOfInversions, arraySize,element;
          testCases = in.nextInt();
          for(int i=0 ; i< testCases ; i++){
              arraySize = in.nextInt();
              numOfInversions=0;
              // ArrayList<Integer> arr= new ArrayList<>(arraySize);
              Vector <Integer> arr = new Vector<>(arraySize);
              for(int q=0 ; q<arraySize ; q++){
                  element = in.nextInt();
                  arr.add(element);
              }
              for(int k=0 ; k <arraySize ;k++){
                  for(int l=k+1 ; l<arraySize ;l++){
                      if(arr.get(k) > arr.get(l))
                          numOfInversions++;
                  }
              }
              System.out.println(numOfInversions);   
          }
         
                  
      }
}
