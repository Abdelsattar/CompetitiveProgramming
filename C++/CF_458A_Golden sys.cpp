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
#include <cmath>
#include <iomanip>

using namespace std;

int toint(char n)
{
    int num;
    stringstream s;
    s<<n;
    s>>num;
    return num;
}

int main()
{
    string num1,num2;
    int n1,n2,po;
    cin>>num1>>num2;
    n1=num1.size()-1;
    n2=num2.size()-1;
    long double gzr,to1=0,to2=0;
    gzr=((sqrt(5)+1)/2);
    for(int i = 0 ; i<(n1+1);i++)
    {
            po=toint(num1[i]);
            to1 += po*pow(gzr,n1-i);
    }

    for(int i = 0 ; i<(n2+1);i++)
    {
            po=toint(num2[i]);
            to2 += po*pow(gzr,n2-i);
    }
    to1 = ceilf(to1 * 1000) / 1000;
    to2 = ceilf(to2* 1000) / 1000;
    cout<<to1<<" "<< to2<<endl;
    if(to1==to2)
        cout<<'='<<endl;
    else if(to1>to2)
        cout<<'>'<<endl;
     else if(to1<to2)
        cout<<'<'<<endl;

    return 0;
}
