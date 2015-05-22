// Mido_Fci
// 2 -8 -2014
// 1 : 49 am
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
    int n,m;
    cin>>n>>m;
    int i=1;
    while(true)
    {
        i=i%n;
        if(i==0)
            i=n;
        if(m>=i)
        {
            m-=i;
        }
        else
        {
            cout<<m<<endl;
            return 0;
        }
        i++;
    }
    return 0;
}
