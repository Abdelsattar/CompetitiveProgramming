
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <sstream>

using namespace std;
int main()
{
    char ch;
    string num;
    while(true)
    {

    cin>>ch>>num;
    if(ch=='0' && num=="0")
        return 0;
    for(int i=0 ; i <num.size() ; i++)
    {
        if(num[i]==ch)
        {
            num.erase(i,1);
            i--;
        }
    }
    for(int i=0 ; i <num.size() ; i++)
    {
        if(num[0]=='0')
            {
                num.erase(0,1);
                i--;
            }
        else
              break;
    }
    if(num.size()==0)
        cout<<'0'<<endl;
    else
        cout<<num<<endl;
    }
    return 0;
}



