//mido_fci
// ramada 27
// 27 - 7 - 2014
//  1:00 am
// el 3arie4
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
#include <iterator>
using namespace std;

int main()
{
    string num1, num2;
    cin>>num1>>num2;
    int count1=0 ,count2=0;

    for(int i=0 ; i<num1.size() ; i++)
    {
        if(num1[i]=='4' && num2[i]=='7')
        {
            count1++;
        }
        else if (num1[i]=='7' && num2[i]=='4')
        {
            count2++;
        }
    }
    if(count1 == count2)
    {
        cout<<(count1+count2)/2<<endl;
    }
    else
    {
        if(count1 >count2)
            {
                cout<<count1<<endl;

            }
        else
            cout<<count2<<endl;
    }

    return 0;
}
