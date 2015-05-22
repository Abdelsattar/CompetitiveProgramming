// Mido_Fci
// 7-8-2014
// 8:41 pm
// EL 3arei4
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <sstream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string num;
    bool check;
    for(int i=0 ; i<n ; i++)
    {
        check=true;
        cin>>num;
        for(int m=0 ; m<num.size()-2 ; m++ )  // 0123456
        {
            int n0,n1,n2;
            n0= (int)num[m];
            n1= (int) num[m+1];
            n2= (int) num[m+2];
           // cout<<n0<<" "<<n1<<" "<<n2<<endl;
            if( (n1== (n0+1) && n2==(n1+1)) || (n0== (n1+1) && n1==(n2+1)) )
            {
                cout<<"WEAK\n";
                check=false;
                break;
            }
        }
        if(check)
            cout<<"ACCEPTABLE"<<endl;
    }
    return 0;
}
