// Mido_Fci
// 3-8-2014
// 5:22pm
// Ramadan
// EL 3arei4
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <sstream>
using namespace std;

int main()
{
   long long int  n, k,f,t,ma;
   cin>>n>>k;
   vector <long long int  > vec(n);
   for(int i=0 ; i<n ;i++)
   {
       cin>>f>>t;
       if(t>k)
            vec[i]= f-(t-k);
       else
            vec[i]=f;
       if(i==0)
        ma=vec[i];
       if(vec[i]>ma)
        ma=vec[i];
    }

   cout<<ma<<endl;
	return 0;
}
