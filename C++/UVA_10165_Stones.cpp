// Mido_Fci
// 11-8-2014
// 12:54 pm
// EL 3arei4
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <sstream>
using namespace std;

int main()
{
    int N,num,i;
    while(cin>>N && N!=0)
    {
            i=0;
        while(i<N)
        {
            cin>>num;
            i++;
        }
        if(N%2==0)
            cout<<"No\n";
        else
            cout<<"Yes\n";
    }

          return 0;
}
