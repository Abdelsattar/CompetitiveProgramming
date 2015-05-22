// Mido_Fci
// 20-8-2014
// 5:25 pm
// EL 3arei4
// ver: 2
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <sstream>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <stdio.h>
using namespace std;
int main()
{
    int N,M,count=0;
    cin>>N>>M;


    while(N--)
    {
        count++;
        if(count%M==0)
            N++;
    }
    cout<<count<<endl;
    return 0;
}

