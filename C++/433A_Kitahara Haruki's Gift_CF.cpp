// Mido_Fci
// 6-8-2014
// 7:52 am
// EL 3arei4
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <sstream>
using namespace std;

int main()
{
  int n,wight,w100=0,w200=0;
    cin>>n;

    for(int i=0 ;i<n ;i++)
    {
        cin>>wight;
        w100+=wight;

       if(wight==100)
            w100++;
        else
            w200++;
    }
        if(n==1)
            cout<<"NO"<<endl;
        else if(w100%2==0 )
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    return 0;
}
