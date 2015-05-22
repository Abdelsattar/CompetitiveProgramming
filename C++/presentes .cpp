#include <iostream>

using namespace std ;
 int main ()
 {
    int x,arr[100];
    cin>>x;
    for(int i=0; i< x;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<=x;i++)
    {
       for(int l=0; l< x;l++)
       {
       if (arr[l]==i)
       {
           cout<<l+1<<" ";
           break;
       }
       }
    }
return 0;
 }
