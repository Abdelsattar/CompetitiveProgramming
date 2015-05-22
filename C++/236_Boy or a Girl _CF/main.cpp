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
#include <map>
#include <iterator>
using namespace std;

int main()
{
    string name;
    int count=0;
    cin>>name;
    map <char , int > mymap;
    map < char , int > :: iterator iter;

    for(int i=0 ;i < name.size() ; i++)
        mymap[name[i]]++;

    for ( iter =mymap.begin()  ; iter!= mymap.end() ; iter++)
                count++;

    if(count%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
    return 0 ;
}
