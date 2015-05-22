#include <iostream>
#include <sstream>
using namespace std;
string tostr(int num)
{
    stringstream ss;
    ss<<num;
    string s;
    ss>>s;
    return s;
}

int main()
{
     long long n, num , x=0 , y=1;
    string num1;
    while(cin>>n)
    {
        x=0;
        y=1;

     for(int i =0 ; i<n ; i++)
     {
        if(i%2==0)
        x=x+y;
        else
        y=x+y;
     }
    if(n%2==0)
    {
        cout<<x<<endl;
        num1=tostr(x);
        cout<<num1[num1.size()-1]<<endl;
    }
    else
    {
        cout<<y<<endl;
        num1=tostr(y);
        cout<<num1[num1.size()-1]<<endl;
        cout<<num1;
    }

    }

    return 0;
}
