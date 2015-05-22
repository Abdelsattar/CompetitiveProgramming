
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
    double num,count=0,total=0;
    double avg;
    for(int i=0 ;i<6 ; i++)
    {
        cin>>num;
        if(num>0)
        {
            total+=num;
            count++;
        }
    }
    cout<<count<<" valores positivos"<<endl;
    avg=(double) total/count;
     cout<<fixed;
            cout.precision(1);
    cout<<avg<<endl;
    return 0;
}



