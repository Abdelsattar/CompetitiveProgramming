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
    int n,num;
    cin>>n;
    map <int ,int > mymap;
    map <int ,int >  :: iterator iter;

    for(int i=0 ;i <n; i++)
    {
        cin>>num;
        mymap[num]++;
        if(mymap[num])
    }
    for(iter =mymap.begin() ; iter!=mymap.end() ;iter++)
    {
        if(iter -> second != (n/3))
        {
            cout<<"-1"<<endl;
            return 0;
        }
    }

    return 0;
}
