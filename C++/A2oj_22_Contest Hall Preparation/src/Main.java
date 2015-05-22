
import java.util.Scanner;

/**
 * 21-2-2015
 * 3:41
 * @author Abd El-Sattar
 */
public class Main {
    public static void main(String args []){
        Scanner in = new Scanner (System.in);
        int T,m,n,Max; 
        T = in.nextInt();
        for(int i =0 ; i <T ; i++){
            n=in.nextInt();
            m =in.nextInt();
            Max=-1;
            int arr [][] = new int[n][m];
            int array [] = new int[100];
            for(int N=0 ; N<n ; N++){
                for(int M=0 ; M<m ; M++){
                    arr[N][M]= in.nextInt();
                    if( arr[N][M] > Max)
                           Max = arr[N][M];
                    if(N>0 && M>0){
                        if(arr[N][M]== arr[N][M-1] && arr[N][M]!=-1  ){
                           array[arr[N][M]]++;
                         }else if(arr[N][M]== arr[N-1][M-1] && arr[N][M]!=-1 ){
                             array[arr[N][M]]++;
                         } else if(arr[N][M]== arr[N-1][M]  && arr[N][M]!=-1 ){
                             array[arr[N][M]]++;
                         }
                    }
                }
            }
            
          /*   for(int N=1 ; N<n ; N++){
                for(int M=1 ; M<m ; M++){
                    if(arr[N][M]== arr[N][M-1] && arr[N][M]!=-1  ){
                        array[arr[N][M]]++;
                    }else if(arr[N][M]== arr[N-1][M-1] && arr[N][M]!=-1 ){
                        array[arr[N][M]]++;
                    } else if(arr[N][M]== arr[N-1][M]  && arr[N][M]!=-1 ){
                        array[arr[N][M]]++;
                    }
                }
            }
                */
             int count=0;
             for(int Q=0 ; Q<Max ;Q++){
                 if(array[Q]>0)
                     count++;
             }
            System.out.println(count); 
        }
        
    }
    
}
