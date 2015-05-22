// Mido_Fci
// 10-8-2014
// 01:46 am
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
    int n;
    string stones;
    cin>>n>>stones;
    int numofstones=0;
    for(int i = 0; i<n ;i++)
    {
        if(i ==0 && stones[0] !=stones[1])
            numofstones++;
        else if(i==n-1 && stones[n-1] != stones[n-2])
            numofstones++;
        else if (stones[i] != stones[i-1] && stones[i] != stones[i+1])
            numofstones++;
    }
    cout<<numofstones<<endl;
    return 0;
}
