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
    int N,A,B,count1 ,count2;

    while(cin>>N)
    {
        count1=count2=0;
        if(N==0)
            break;
        for(int i=0 ;i<N ; i++)
        {
            cin>>A>>B;
            if(A>B)
                count1++;
            else if(B>A)
                count2++;
        }
        cout<<count1<<" "<<count2<<endl;
    }
}
