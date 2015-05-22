// Mido_Fci
// 1 - 82014
// 10 :59pm
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
    int n,num,one=0,two=0, thre=0 , four=0,tot=0;
	cin>>n;

	for(int i= 0 ; i < n ; i++)
	{
	    cin>>num;
	    if(num==1)
            one++;
        else if(num==2)
            two++;
        else if(num==3)
            thre++;
        else if(num==4)
            four++;
	}
	tot+=four;
	if(one>thre)
        {
            tot+=thre;
            one-=thre;
        }
	else
	{
	    tot+=thre;
	    one=0;
	}
	if(two%2==0)
        {
            tot+=(two/2);
        }
    else
    {
        if(one >2)
            one-=2;
        else
            one=0;
        two+=1;
         tot+=(two/2);

    }
    float m;

    m= (float) one/4;
    m= ceil(m);

    tot+=m;
    cout<<tot<<endl;
	return 0;
}
