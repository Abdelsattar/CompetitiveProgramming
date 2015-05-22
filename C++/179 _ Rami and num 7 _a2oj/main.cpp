#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main()
{
    long long tests,num,div,total;
    cin>>tests;

    while (tests--)
    {
        cin>>num;
        for(int i =1 ; i ; i ++)
        {
            total=num*i;
            if(total%7==0)
            {
                cout<<total<<endl;
                break;
            }

        }
    }
    return 0;
}
