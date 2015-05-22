#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;

int main()
{
   int tests,nStudents,gussednum,num,min,post,diff;
   cin>>tests;
   for (int i=0 ; i< tests ; i++)
   {
       cin>>nStudents>>gussednum;
       if( nStudents <4 | nStudents >10 | gussednum > 100 | gussednum <1)
       return 0;
         post=1;
       for ( int i = 0 ;i < nStudents ; i++ )
       {
           cin>>num;
           diff=abs(num-gussednum);
           if ( i==0 )
            {
                  min =diff ;
            }
            else if( diff < min )
            {
                min=diff;
                post=i+1;
            }
       }
       cout<<post<<endl;
   }
    return 0;
}
