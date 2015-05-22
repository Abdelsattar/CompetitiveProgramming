// Mido_Fci
// 6-8-2014
// 01:36 am
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
    int n,count=0;
    cin>>n;
    stringstream ss;
    for (int i=0; i<n ; i++)
    {
        for(int m=0 ; m<n ; m++)
        {
            if(i%2 ==0)
            {
                if(m%2==0)
                {
                    ss<<"C";
                    count++;
                }
                else
                    ss<<".";
            }
            else
            {
                if(m%2!=0)
                    {
                        ss<<"C";
                        count++;
                    }
                else
                    ss<<".";
            }
        }
         ss<<endl;

    }
    string s;
    cout<<count<<endl;
    cout<<ss.str();
    return 0;
}
