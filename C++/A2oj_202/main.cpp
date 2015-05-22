// Mido_Fci
// 11-8-2014
// 12:54 pm
// EL 3arei4
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <sstream>
//#include <iomainp>
using namespace std;

int main()
{
   double s,k,m ,n,t1,t2 ;
   int T;
   cin>>T;
   while(T--)
   {
       cin>>s>>n>>k>>m;

   t1=(n/s);
   t2=(m/k);
   t1-=t2;
   if(t1<0)
        cout<<-1<<endl;
    else
        {
            cout.precision(5);
            cout<<fixed<<t1<<endl;
        }
   }
        //cout<<fixed<<percsion(5)<<t1<<endl;
       return 0;
}
