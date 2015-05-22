// Mido_Fci
// 23-9-2014
// 10:00 pm
// EL 3arei4
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <sstream>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    if(b>c && d>a && (c+d) >(a+b) && a%2==0 && c>0 && d>0)
            cout<<"Valores aceitos"<<endl;
    else
            cout<<"Valores nao aceitos"<<endl;

       return 0;
}
