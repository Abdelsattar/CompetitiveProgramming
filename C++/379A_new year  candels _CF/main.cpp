// Mido_fci
// 29-7-2014
// 7:14 pm
// 2nd Day 3eed
// EL 3arei4
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int a , b ,rem =0,_3ddsa3=0;
    cin>>a>>b;

    while(true)
    {
        // a+=rem;
        _3ddsa3+=a;
         a+=rem;
         rem=a%b;
         a/=b;
        if(a==0)
            break;
    }

    cout<<_3ddsa3<<endl;

    return 0;
}
