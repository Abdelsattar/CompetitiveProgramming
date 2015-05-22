// Mido_Fci
// 8-8-2014
// 6:40 pm
// EL 3arei4
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <sstream>
using namespace std;

int main()
{
    string n;
    cin>>n;
        long long m;

    if(n.size() <2)
        {
            stringstream ss;
            ss<<n;
            ss>>m;
            long long to=0;
        for(int i=1 ; i<=m ; i++)
            to+=(pow(i,m));
        cout<<(to%5)<<endl;
        }
    else
        {
            if(n[n.size()-1] == '1' || n[n.size()-1] == '3' || n[n.size()-1] == '7' )
                cout<<1<<endl;
            else
                cout<<0<<endl;
        }
    return 0;
}
