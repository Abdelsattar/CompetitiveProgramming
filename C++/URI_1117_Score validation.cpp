// Mido_Fci
// 23-9-2014
// 10:16 pm
// EL 3arei4
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <sstream>
using namespace std;

int main()
{
    double num,to=0,count=0;
    while(cin>>num)
    {
        if(num<0.0 || num>10.0)
            cout<<"nota invalida\n";
        else
        {
            to+=num;
            count++;
        }
        if(count==2)
            break;
    }
    cout<<"media = "<<(to/2)<<endl;
    return 0;
}
