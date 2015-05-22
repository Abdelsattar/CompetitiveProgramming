import static java.lang.Math.max;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;

/**
 *
 * @author Abd El-Sattar  20120324
 * http://a2oj.com/Submission.jsp?ID=66949
 */
public class ahokeda {
    public static long  counterFirst=0;
    public static long  counterLast=0;
    public static long  counterMedain=0;
    
    public static void main(String args[]){
        Scanner in = new Scanner (System.in);
        int testCases, arraySize;
          long num; //firstElementCount, lastElementCount,medianElementCount;
        testCases = in.nextInt();
        for(int m=0 ; m <testCases ; m++){
            arraySize = in.nextInt();
            ArrayList<Long> arr = new ArrayList<Long>(arraySize);
            for(int i =0 ; i<arraySize ; i++){
                num = in.nextLong();
                arr.add(num);
            }
            long list[] = new long[3];
             if(true){
               ArrayList<Long> arr1 = new ArrayList<Long>(arraySize);
               arr1 = arr;
               counterFirst=0;
               lastElementPivot(arr1,0,arr.size()-1);
               list[1] = counterFirst;
             }
            if(true){
             ArrayList<Long> arr1 = new ArrayList<Long>(arraySize);
             arr1 = arr;
             counterLast=0;
             firstElementPivot(arr1,0,arr.size()-1);
             list[0]=counterLast;
             }
             
             if(true){
                 ArrayList<Long> arr1 = new ArrayList<Long>(arraySize);
                 arr1 = arr;
                 counterMedain=0;
                 medianElementPivot(arr1,0,arr.size()-1);
                 list[2]=counterMedain;
             }
             for(int p=0 ; p<3 ; p++)
                 System.out.print(list[p]+" ");
             System.out.println("");
           
        }
     }
    public static int partionFirst(ArrayList<Long> arr, int L, int R){
       
         int i=L+1,j;
         long pivot=arr.get(L),temp;
        if(R<=L)
            return i-1;
        
        for( j =i ; j<=R ; j++){
           counterFirst++;
            if(arr.get(j)<pivot ){
                 if(j==i)
                     i++;
                else {
                     temp = arr.get(j);
                     arr.set(j, arr.get(i));
                     arr.set(i, temp);
                     i++;
                 }                    
              }
        }
           temp = arr.get(L);
           arr.set(L, arr.get(i-1));
           arr.set(i-1, temp);

        return (i-1);
    }
     public static int partionLast(ArrayList<Long> arr, int L, int R){
       
         int i=L+1,j;
         long pivot=arr.get(L);
         Collections.swap(arr, L, R);
          if(R<=L)
            return i-1;
        
        for( j =i ; j<=R ; j++){
           counterLast++;
            if(arr.get(j)<pivot ){
                     Collections.swap(arr,i,j);
                     i++;
                }
        }
           Collections.swap(arr, L, i-1);
         return i-1;
    }
    public static int partionMedian(ArrayList<Long> arr, int L, int R){
       
        long list[] = new long[3];
        list[0]= arr.get(L);;
        list[1]= arr.get((L+R)/2); 
        list[2]= arr.get(R); 
        int index=0;
        // sort 
        Arrays.sort(list);
        // compare
        if(list[1]==arr.get(L))
            index=L;
        else if (list[1]==arr.get((L+R)/2))
            index=(L+R)/2 ;
        else
            index=R;
        Collections.swap(arr, L, index);
      
        
         int i=L+1,j;
         long pivot=arr.get(L);
         if(R<=L)
            return i-1;
        
        for( j =i ; j<=R ; j++){
           counterMedain++;
            if(arr.get(j)<pivot ){
                  Collections.swap(arr, i, j);
                   i++;
              }
        }
         Collections.swap(arr, L, i-1);
        return i-1;
    }
    public static void firstElementPivot(ArrayList<Long> arr, int L, int R ){
       if(R<=L)
           return ; 
        int p = partionFirst(arr, L, R);
        firstElementPivot(arr, L, p-1);
        firstElementPivot(arr, p+1, R );
       
        
    }
    
    public static void lastElementPivot(ArrayList<Long> arr, int L, int R){
      
         if(R<=L)
           return ; 
           
        int p = partionLast(arr, L, R);
        lastElementPivot(arr, L, p-1);
        lastElementPivot(arr, p+1, R );
        
    }
    
    public static void medianElementPivot(ArrayList<Long> arr,int L, int R ){
       
        if(R<=L)
            return;
         int p = partionMedian(arr, L, R);
        medianElementPivot(arr, L, p-1);
        medianElementPivot(arr, p+1, R );
        
    }
}