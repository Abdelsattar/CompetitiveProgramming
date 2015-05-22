// Mido_Fci
// 23-8-2014
// 6:44 pm
// EL 3arei4
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <sstream>
using namespace std;

int main()
{
    int T,N,R,x,y,count;
        cin>>T;
    while(T--)
    {
        count=0;
        cin>>N>>R;

        while(N--)
        {
            cin>>x>>y;

            if(x<=R && y<=R)
                    count++;
//            else if (x<R && y<=R)
//                    count++;
        }
        cout<<count<<endl;
    }
       return 0;
}
