// Mido_Fci
// 23-8-2014
// 6:44 pm
// EL 3arei4
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <sstream>
using namespace std;

int main()
{
   int T,a,b,c,d,max;
   string ans;
   cin>>T;
   while(T--)
   {
       a=b=c=d=max=0;
       cin>>ans;
       for(int i=0 ; i<ans.size() ; i++)
        {
            if(ans[i]=='A')
                {
                    a++;
                    if(a>max)
                        max=a;

                }
            else if (ans [i]=='B')
              {
                    b++;
                    if(b>max)
                        max=b;
              }
            else if (ans [i]=='C')
               {
                    c++;
                    if(c>max)
                        max=c;
              }
            else if (ans [i]=='D')
                {
                    d++;
                    if(d>max)
                        max=d;
              }
        }

        cout<<max<<" ";
        if(a==max)
            cout<<'A';
        if(b==max)
            cout<<'B';
        if(c==max)
            cout<<'C';
        if(d==max)
            cout<<'D';
            cout<<endl;
   }
       return 0;
}
