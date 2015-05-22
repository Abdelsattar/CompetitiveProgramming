// Mido_Fci
// 30-7-2014
// 2: 18 am
// Ramadan
// EL 3arei4
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <sstream>
using namespace std;
int toint(char m)
{
    int s;
    stringstream ss;
    ss<<m;
    ss>>s;
    return s;
}

int main()
{
    int n , awel=0, tany=0;
    string num;

    cin>>n>>num;

    for(int i=0 ; i< (n/2) ; i++)
    {
        if(num[i]!='4' && num[i] !='7')
        {
            cout<<"NO"<<endl;
            return 0;
        }

        awel+=toint(num[i]);
    }

    for(int i= n/2 ; i< n ; i++)
    {
        if(num[i]!='4' && num[i] !='7')
        {
            cout<<"NO"<<endl;
            return 0;
        }

        tany+=toint(num[i]);
    }
    if(awel==tany)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
	return 0;
}
