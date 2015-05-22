// Mido_Fci
// 4-7-2014
// 01:44pm
// Ramadan
// EL 3arei4
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <sstream>
using namespace std;

int main()
{
    string x,y,z;
    int X,Y,Z;
    cin>>x>>y>>z;
    bool checkx=false ,checky=false;
    string arr[23]={"C","C#" ,"D", "D#", "E", "F", "F#", "G", "G#", "A", "B", "H","C","C#" ,"D", "D#", "E", "F", "F#", "G", "G#", "A", "B"};

    for(int i=0 ; i<24 ; i++)
    {
        if(arr[i]==x && checkx==false)
        {
            checkx=true;
            X=i;
        }
        else if(arr[i]==y && checkx==true && checky==false)
        {

            checky=true;
            Y=i;
        }
        else if (arr[i]==z && checky)
        {
            Z=i;
            break;
        }
    }
    cout<<X<<" "<<Y<<" "<<Z<<endl;
    X=Y-X;
    Z=Z-Y;

    cout<<X<<" "<<Z<<endl;
    if(X==4 && Z==3)
        cout<<"major"<<endl;
    else if (X==3 && Z==4)
        cout<<"minor"<<endl;
    else
        cout<<"strange"<<endl;
    return 0;
}
