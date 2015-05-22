#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int tests,n,num,total;
    cin>>tests;

    while (tests--)
    {
        total=0;
        cin>>n;
        map <int , int > mymap;
        map <int ,int > :: iterator iter;
        for(int i=0 ;i < n ; i++)
        {
            cin>>num;
            mymap[num]++;
        }

        for(iter = mymap.begin() ; iter != mymap.end() ; iter++)
        {
            total += (iter->second / 4);
        }
        cout<<total<<endl;
    }
    return 0;
}
