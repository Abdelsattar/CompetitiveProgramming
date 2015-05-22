//Author : mido_Fci
//Date   : 6-3-2014

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std ;
 int main ()
 {
     long long n,x,sum=0;
     cin>>n>>x;
   vector < long long > vec(n);

   for (int i=0 ; i< n ; i++)
    cin>>vec[i];

   sort (vec.begin(), vec.begin()+n);

   for ( int i =0 ;i<n ;i++)
   {
       sum += ( x * vec[i]);
       if(x>1)
       x--;
   }

   cout<<sum<<endl;

   return 0 ;
 }
