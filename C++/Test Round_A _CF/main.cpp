// Mido_Fci
//  1- 8-2014
// 2 : 14pm
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

    map <int, bool > mymap;
    map <int, bool > :: iterator iter;

    for(int i=1 ; i < n; i++)
    {
        cin>>num;
        mymap[num]=true;
    }
        int i=1;
    for(iter = mymap.begin() ; iter != mymap.end() ; iter++  )
    {
        if(iter -> first != i )
        {
            cout<< i <<endl;
            return 0;
        }
         i++;
    }
    cout<<i<<endl;


	return 0;
}
