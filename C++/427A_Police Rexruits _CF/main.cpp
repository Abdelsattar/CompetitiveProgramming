// Mido_Fci
// 1 -8 -2014
// 12 :41 pm
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
    int n, untreated=0,num, officers=0;

        cin>>n;
    for(int i=0 ;i< n ;i++)
    {
        cin>>num;
        if(num==-1)
        {
            if(officers >0)
                officers--;
            else
                untreated++;
        }
        else
            officers+=num;

    }
    cout<<untreated<<endl;
    return 0;
}
