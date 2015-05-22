
import static java.lang.Math.max;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

/**
 *
 * @author Abd El-Sattar  20120324
 * http://a2oj.com/Submission.jsp?ID=66949
 */
public class Main {
    public static long  counter=0;
    
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
               counter=0;
               lastElementPivot(arr1,0,arr.size()-1);
               list[1] = counter;
             }
            if(true){
             ArrayList<Long> arr1 = new ArrayList<Long>(arraySize);
             arr1 = arr;
             counter=0;
             firstElementPivot(arr1,0,arr.size()-1);
             list[0]=counter;}
             
             if(true){
                 ArrayList<Long> arr1 = new ArrayList<Long>(arraySize);
                 arr1 = arr;
                 counter=0;
                 medianElementPivot(arr1,0,arr.size()-1);
                 list[2]=counter;
             }
             for(int p=0 ; p<3 ; p++)
                 System.out.print(list[p]+" ");
             System.out.println("");
           
        }
     }
   // public static int count=0
    public static int partion(ArrayList<Long> arr, int L, int R){
       
         int i=L+1,j;
         long pivot=arr.get(L),temp;
       // int [] array = new int[2];
        if(R<=L)
            return i-1;
        
        for( j =i ; j<=R ; j++){
           counter++;
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

        return i-1;
    }
    public static void firstElementPivot(ArrayList<Long> arr, int L, int R ){
       if(R<=L)
           return ; 
            
        int p = partion(arr, L, R);
        firstElementPivot(arr, L, p-1);
        firstElementPivot(arr, p+1, R );
       
        
    }
    
    public static void lastElementPivot(ArrayList<Long> arr, int L, int R){
      
         if(R<=L)
           return ; 
         Collections.swap(arr, L, R);
            
        int p = partion(arr, L, R);
        lastElementPivot(arr, L, p-1);
        lastElementPivot(arr, p+1, R );
        
    }
    
    @SuppressWarnings("empty-statement")
    public static void medianElementPivot(ArrayList<Long> arr,int L, int R ){
       
        if(R<=L)
            return;
        long a,b,c,temp; 
        a = arr.get(L); 
        b = arr.get((L+R)/2);
        c = arr.get(R);
        
        long list[] = new long[3];
        list[0]= a;
        list[1]= b; 
        list[2]= c; 
        int index=0;
       // list.sort();
        
        for(int i=0 ; i <3 ; i++){
            for(int q=i+1; q<3 ; q++){
                if(list[i]>list[q]){
                      temp = list[i];
                      list[i]= list[q];
                      list[q]= temp;
                     
                }
                    
            }
        } 
        //System.out.println("list [ 1 ] = "+ list[1]);
        
        if(list[1]==a)
            index=L;
        else if (list[1]==b)
            index=(L+R)/2 ;
        else if(list[1]==c)
            index=R;
          
          temp = arr.get(L);
          arr.set(L, arr.get(index));
          arr.set(index, temp);
       
         int p = partion(arr, L, R);
        medianElementPivot(arr, L, p-1);
        medianElementPivot(arr, p+1, R );
        
    }
}
