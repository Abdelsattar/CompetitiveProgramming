// Mido_Fci
// 9-8-2014
// 00:57 am
// EL 3arei4
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
    string op;
    int n,to=0;
    cin>>n;
    for(int i=0 ;i<n ; i++)
    {
        cin>>op;
        if(op=="X++" || op=="++X")
            to++;
        else
            to--;
    }
    cout<<to<<endl;
    return 0;
}
