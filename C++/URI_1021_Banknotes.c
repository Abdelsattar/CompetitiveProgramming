// Mido_Fci
// 21-9-2014
// 6:49 pm
// EL 3arei4
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <sstream>
using namespace std;

int main()
{
   int num,n;
   cin>>num;

       if(num==2)
        {
            cout<<0<<endl;
            return 0;
        }
       else if(num==1)
        {
            cout<<2<<endl;
            return 0;
        }
        if(num%2==0)
            cout<<4<<endl;
        else
            cout<<2<<endl;
   while(true)
   {
        for(int i =1 ; i<1000; i++)
        {
            n=(num*i)+2;
            if(n>1000)
                return 0;
            cout<<n<<endl;
        }
   }
}
