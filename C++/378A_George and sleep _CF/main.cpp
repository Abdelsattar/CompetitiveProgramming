//mido_Fci
// 28-7-2014
// 4:40 am
//2bl salt el 3eed ^^
#include <sstream>
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
int toint(string m)
{
    int s;
    stringstream ss;
    ss<<m;
    ss>>s;
    return s;

}
int main()
{
    string sa3a1 ,sa3a2,h1,m1,h2,m2;
    cin>>sa3a1 >>sa3a2;
    h1=sa3a1.substr(0,2);
    m1= sa3a1.substr(3,2);
    h2=sa3a2.substr(0,2);
    m2= sa3a2.substr(3,2);

    int h11 ,h22 , m11 , m22;
    h11=toint(h1);
    m11=toint(m1);
    h22=toint(h2);
    m22=toint(m2);

    if(h11==0 || h11 <h22)
        h11+=24;
     if(h22==0)
        h22=24;
    if(m22 > m11)
        {
            m11+=60;
            h11--;
        }
     if(h11==0 || h11 <h22)
            h11+=24;

        if(h11-h22<10)
            cout<<"0";
        cout<<h11-h22<<":";
        if(m11-m22< 10)
            cout<<"0";
        cout<<m11-m22<<endl;

    return 0;
}
