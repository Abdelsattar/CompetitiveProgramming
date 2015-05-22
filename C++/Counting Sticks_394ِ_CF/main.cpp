// Mido_Fci
//ACm FCI CU
// 16-7-2014
//  5 : 00pm
// Ramadan
// EL haram
#include <iostream>
#include <vector>
#include <map>
#include <sstream>
using namespace std;
int main()
{
    string ex;
    int num1 , num2 =0 ,sum =0;
    getline(cin , ex);
    for ( int i = 0 ; i< (int)ex.size() ; i++ )
    {
        if(ex[i]=='+')
        break;
        num1=i+1;
    }

  for ( int i = num1+1 ; i< (int)ex.size() ; i++ )
    {
        if(ex[i]=='=')
        break;
        num2++;
    }
    sum=(ex.size() - (num1+num2)-2);
    if(num1+num2==sum)
    {
        cout<<ex<<endl;
        return 0;
    }
    else
    {
        num1++; sum--;
        if(num1+num2==sum)
        {
            cout<<"|";
            for(int i=0 ; i < ex.size()-1 ;i++)
                cout<<ex[i];
            cout<<endl;
            return 0;
        }
    }
    cout<<"Impossible\n";

	return 0;
}
