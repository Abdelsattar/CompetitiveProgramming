
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
    //int arr[12][12];
    int num,Line,to=0;
    cin>>Line;
    char ch;
    cin>>ch;

    for(int i=0 ;i<12 ;i++)
    {
        for(int m=0 ; m<12 ; m++)
        {
            cin>>num;
            if(i==Line)
                to+=num;
        }
    }

    if(ch=='S')
        cout<<to<<endl;
    else
    {
        cout<<fixed;
            cout.precision(1);
        cout<<(double)to/12<<endl;
    }
    return 0;
}



