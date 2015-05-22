// Mido_Fci
// 21-8-2014
//  7:20 pm
// EL 3arei4
// ver: 2
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <sstream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <stdio.h>
using namespace std;
int toint(string s)
{
    int num;
    stringstream ss;
    ss<<s;
    ss>>num;
    return num;
};

int main()
{
    string date1,date2;
    int d1,d2,m1,m2,y1,y2,n;
    cin>>n;
   for(int i=1 ; i<=n ; i++)
   {
        cin>>date1>>date2;
    d1=toint(date1.substr(0,2));
    m1=toint(date1.substr(3,2));
    y1=toint(date1.substr(6,4));

    d2=toint(date2.substr(0,2));
    m2=toint(date2.substr(3,2));
    y2=toint(date2.substr(6,4));

    if(y2> y1 || (y2==y1 && m2>m1) || (y2==y1 && m2==m1 && d2>d1))
        cout<<"Case #"<<i<<": Invalid birth date"<<endl;
    else
    {
        if(d2>d1)
        {
            d1+=30;
            d1-=d2;
            m1--;
        }
    else
        d1-=d2;
    if(m2>m1)
        {
            m1+=12;
            m1-=m2;
            y1--;
        }
    else
            m1-=m2;
    y1-=y2;
    if(y1>130)
        cout<<"Case #"<<i<<": Check birth date"<<endl;
    else
    cout<<"Case #"<<i<<": "<<y1<<endl;
    }
   }

    return 0;
}

