// Mido_Fci
// 31 -7-2014
// 05 : 47 am
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
	int tests, sure , count1 =0 , count2 =0;
	cin>>tests;

	while (tests--)
	{
	    count1 =0 ;
		for(int i=0 ; i< 3; i++)
		{
		    cin>>sure;
		    if(sure)
                count1++;
		}

        if(count1 >=2)
            count2++;
	}
	cout<<count2;
	return 0;
}
