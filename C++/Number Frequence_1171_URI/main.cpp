#include <iostream>
#include <map>
using namespace std;

int main()
{
    int test , num;
    cin >>test;
    map <int ,int > mymap;
    map <int , int > :: iterator iter;

    for (int i=0 ;i< test ; i++)
    {
        cin>>num;
        mymap[num]++;
    }

    for ( iter = mymap.begin() ; iter != mymap.end() ; iter++)
    {
        cout<<iter->first<<" aparece "<< iter->second<<" vez(es)"<<endl;
    }
    return 0;
}
