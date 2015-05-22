// Mido_Fci
// 8-8-2014
// 6:40 pm
// EL 3arei4
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <sstream>
using namespace std;

int main()
{
    int n,min,max,posx,posn;
    cin>>n;
    vector <int> vec1(n);
    vector <int> vec2(n);

    for(int i=0 ; i< n ; i++)
    {
        cin>>vec1[i]>>vec2[i];
        if(i==0)
        {
            min=vec1[i];
            max=vec2[i];
            posx=posn=0;
        }
       else if(vec1[i]<min)
       {
           min=vec1[i];
           posn=i;
       }
        if(vec2[i] > max )
        {
            max=vec2[i];
            posx=i;
        }
    }
    if(posx==posn)
    {
        cout<<"Happy Alex"<<endl;
    }
    else
        cout<<"Poor Alex"<<endl;
    return 0;
}
