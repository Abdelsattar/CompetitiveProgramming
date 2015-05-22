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
using namespace std;

bool isprime(int x)
{
    if (x < 2)
        return false;
    for(int i=2; i<= sqrt(x); i++)
    {
        if ((x%i) == 0)
            return false;
    }
  return true;

}
string tostr(int num)
{
    string nu;
    stringstream ss;
    ss<<num;
    ss>>nu;
    return nu;
}
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
    int x=3,count=1;
    vector <int> vec(100);
    string num;
    int to;
    vec[0]=2;
    while(true)
    {
        if(isprime(x))
        {
            to=1;
            if(x/10==0)
             vec[count]=x+vec[count-1];
             else
             {
                 num=tostr(x);
                 for(int i = 0 ; i <num.size() ;i++)
                 {
                     to*=toint(num[i]);
                 }
                 vec[count]=to+vec[count-1];
             }
             count++;
        }
        if(count==100)
            break;

        x++;
    }

    int T,index;
    cin>>T;
    while(T--)
    {
        cin>>index;
        cout<<vec[index-1]<<endl;
    }
    return 0;
}
