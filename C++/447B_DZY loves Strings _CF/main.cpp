// Mido_Fci
// 3-8-2014
// 5:22pm
// Ramadan
// EL 3arei4
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <sstream>
using namespace std;

int main()
{
    // a= 97  z= 122

    int n,num,m=97,ma,count=1, to=0;
    string s;
    cin>>s>>n;
    map <char, int> mymap;
    map <char , int> :: iterator iter;
    for(int i=0; i <26 ;i++ )
    {
        char c;
        c= (char)m;
        cin>>num;
        mymap[m]=num;
        m++;
    }
    ma=-1;
    for(iter=mymap.begin() ; iter!=mymap.end() ;iter++ )
    {
        if(iter->second >ma)
            ma=iter->second;
    }

    for(int i =0 ; i<s.size() ; i ++)
    {
       to+=mymap[s[i]]*count;
       count++;
    }
    for(int i=0 ; i<n ; i++)
        {
            to+=count*ma;
            count++;
        }
    cout<<to<<endl;
	return 0;
}
