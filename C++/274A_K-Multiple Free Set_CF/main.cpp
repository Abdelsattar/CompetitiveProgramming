// Mido_Fci
// 4-7-2014
// 01:44pm
// Ramadan
// EL 3arei4


// we23t m4 ma7lolas7

#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <sstream>
using namespace std;

int main()
{
    long long k,num,n,count=0;
    map <long long,long long > mymap;
    map<long long ,long long > ::iterator iter;
    cin>>n>>k;
    vector <long long> vec(n);

    for(int i=0 ;i<n ; i++)
        {
            cin>>vec[i];
            mymap[vec[i]]++;
        }

    for (int i=0 ;i< n ; i++)
    {
        num=vec[i]*k;
        if(mymap[num]>0)
           {
            cout<<num<<endl;
               count++;
               }
    }

    cout<<count<<endl;
	return 0;
}
