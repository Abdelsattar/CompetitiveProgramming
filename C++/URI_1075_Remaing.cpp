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


        if(num%2==0)
            cout<<4<<endl;
        else
            cout<<2<<endl;
   while(true)
   {
        for(int i =1 ; i<10000; i++)
        {
            n=(num*i)+2;
            if(n>10000)
                return 0;
            cout<<n<<endl;
        }
   }
}
