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
    int n, num1,num2,count=0;
    cin>>n;

    for(int i=0 ; i<n ;i++)
    {
        cin>>num1>>num2;
        if((num2-num1)>=2)
            count++;
    }
    cout<<count<<endl;
       return 0;
}
