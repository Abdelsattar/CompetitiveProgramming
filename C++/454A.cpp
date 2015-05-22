// Mido_Fci
// 10-7-2014
// 1:58pm
// Ramadan
// EL 3arei4
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include<sstream>
#include <algorithm>
using namespace std;


int main()
{
    int n ;
    cin>>n;

    for(int i= ((n-1) /2), l=1 ; i!=0; i-- )
    {
        for(int m = i ; m>0 ; m--)
            cout<<"*";
        for(int k=l; k>0 ;k--)
            cout<<"D";
        for(int m = i ; m>0 ; m--)
            cout<<"*";
        cout<<endl;
        l+=2;
       // cout<<l<<endl;
    }
    for(int i=0 ;i < n ; i++)
        cout<<"D";
    cout<<endl;

    for(int i= 1, l=1 ; i<=((n-1) /2); i++ )
    {
        for(int m = 0 ; m <i ; m++)
            cout<<"*";
        for(int k=(n- 2*i); k> 0 ;k--)
            cout<<"D";
        for(int m = 0 ; m <i; m++)
            cout<<"*";
        cout<<endl;
        l+=2;

       // cout<<l<<endl;
    }
	return 0 ;
}
