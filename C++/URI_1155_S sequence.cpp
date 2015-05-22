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
    double S=1;

    for(int i=2 ;i<=100;i++ )
            S+=(double) 1/i;;

    cout<<fixed;
     cout.precision(2);
    cout<<S<<endl;
}
