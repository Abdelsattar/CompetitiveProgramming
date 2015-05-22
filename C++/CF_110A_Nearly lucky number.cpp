// Mido_Fci
// 9-8-2014
// 00:57 am
// EL 3arei4
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
    string num;
    int _3ddellucky=0;

    cin>>num;
    for(int i =0 ; i<num.size() ; i++)
    {
        if(num[i]=='7' || num[i]=='4')
                _3ddellucky++;
    }
    if(_3ddellucky ==4 ||_3ddellucky ==7 || _3ddellucky ==47 ||_3ddellucky ==74  )
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
