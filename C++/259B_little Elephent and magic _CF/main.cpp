//mido_fci
// 30-7-2014
// 7:23 pm
// 3ed day 3eeed
// el 3arie4

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int arr[3][3];
    int co,ra,dia1=0,dia2=0,pos;
    int col[3] , raw[3];

    for(int i=0 ;i <3 ; i++)
        {
            ra=0;
            for(int m=0 ; m<3 ; m++)
                {
                    cin>>arr[i][m];
                    ra+=arr[i][m];
                    if(i==m)
                        dia1+=arr[i][m];
                    if ( (i==0 && m==2 ) || (i==1 && m==1) || (i==2 && m==0) )
                        dia2+=arr[i][m];
                }
            raw[i]=ra;
        }

    int temp = 0,far21 , far22 , num;
    for(int i=0;i<3;i++)
    {
        if(raw[i]>temp)
        {
            temp=raw[i];
            pos=i;
        }
    }
    if(pos==0)
    {
        far21=raw[0]-raw[1];
        far22=raw[0]-raw[2];
    }
    else if (pos==1)
     {
        far21=raw[1]-raw[0];
        far22=raw[1]-raw[2];
     }
    else
     {
        far21=raw[2]-raw[0];
        far22=raw[2]-raw[1];
     }


     for(int i =1 ; ; i++)
     {
         //   cout<< i <<" " << (3*i +far21 +far22) <<" "<<(raw[0]+i)<<endl;
            if( (3*i +far21 +far22) == (raw[pos]+i) )
            {
                num=i;
                break;
            }
     }

         if (dia1==0)
         {
             if(pos==0)
             {
                 arr[0][0]+=num;
                 arr[1][1]+= (num+far21);
                 arr[2][2]+= (num+ far22);
             }
             else if (pos==1)
             {
                 arr[1][1]+=num;
                 arr[0][0]+= (num+far21);
                 arr[2][2]+= (num+ far22);
            }
             else
             {
                 arr[2][2]+=num;
                 arr[0][0]+= (num+far21);
                 arr[1][1]+= (num+ far22);
             }
         }
         else
         {
                if(pos==0)
             {
                 arr[0][3]+=num;
                 arr[1][1]+= (num+far21);
                 arr[2][0]+= (num+ far22);
             }
             else if (pos==1)
             {
                 arr[1][1]+=num;
                 arr[0][3]+= (num+far21);
                 arr[2][0]+= (num+ far22);
            }
             else
             {
                 arr[2][0]+=num;
                 arr[0][3]+= (num+far21);
                 arr[1][1]+= (num+ far22);
             }
         }
        for(int i =0 ;i< 3 ; i++)
        {
            for(int m=0 ;m <3 ; m++)
                cout<<arr[i][m]<<" ";
            cout<<endl;
        }
     return 0;
}
