// Mido_Fci
// 11-8-2014
// 12:54 pm
// EL 3arei4
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <sstream>
#include <iomainp>
using namespace std;

int main()
{
   double s,k,m ,n,t1,t2 ;
   cin>>s>>n>>k>>m;

   t1=(n/s);
   t2=(m/k);
   t1-=t2;
   if(t1<0)
        cout<<-1<<endl;
    else
        cout<<fixed<<percsion(5)<<t1<<endl;
       return 0;
}
