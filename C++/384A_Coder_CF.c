// Mido_Fci
// 4-7-2014
// 01:44pm
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
	int n,a1,a2,a3,b1,b2,b3,sum1,sum2;
	double lol1,lol2;
	cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;
    sum1=a1+a2+a3;
    sum2=b1+b2+b3;
    lol1= (double)sum1/5;
    lol2= (double)sum2/10;
    lol1=ceil(lol1);
    lol2= ceil(lol2);
    if(lol1+lol2 <= n)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
	return 0;
}
