// Mido_Fci
// 21-9-2014
// 8:10 pm
// EL 3arei4
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <sstream>
using namespace std;

int main()
{
    double num;
    int _han,_fit,_twn , _ten , _5 ,_2;
    _han=_fit=_twn = _ten = _5 =_2=0;
    cin>>num;
    while(num>100)
    {
        _han++;
        num-=100;
    }
    if(num>50)
    {
        _fit++;
        num-=50;
    }
    while(num>20)
    {
        _twn++;
        num-=20;
    }
    if(num>10)
    {
        _ten++;
        num-=10;
    }
    if(num>5)
    {
        _5++;
        num-=5;
    }
    while(num>2)
    {
        _2++;
        num-=2;
    }
    int _1, _50 , _25 , _10,_05 , _01;
    _1= _50 = _25 = _10=_05 = _01=0;
     if(num>1)
    {
        _1++;
        num-=1;
    }
     if(num>.5)
    {
        _50++;
        num-=.5;
    }
     if(num>.25)
    {
        _25++;
        num-=.25;
    }
     while(num>.10)
    {
        _10++;
        num-=.10;
    }
     if(num>.05)
    {
        _05++;
        num-=.05;
    }
     while(num>_01)
    {
        _01=(num/.01);
    }

cout<<"NOTAS:"<<endl;
cout<<_han<<" nota(s) de R$ 100.00"<<endl;
cout<<_fit<<" nota(s) de R$ 50.00"<<endl;
cout<<_twn<<" nota(s) de R$ 20.00"<<endl;
cout<<_ten<<" nota(s) de R$ 10.00"<<endl;
cout<<_5<<" nota(s) de R$ 5.00"<<endl;
cout<<_2<<" nota(s) de R$ 2.00"<<endl;

//  int _1, _50 , _25 , _10,_05 , _01;
cout<<"MOEDAS:"<<endl;
cout<<_1<<" moeda(s) de R$ 1.00"<<endl;
cout<<_50<<" moeda(s) de R$ 0.50"<<endl;
cout<<_25 <<" moeda(s) de R$ 0.25"<<endl;
cout<<_10<<" moeda(s) de R$ 0.10"<<endl;
cout<<_05<<" moeda(s) de R$ 0.05"<<endl;
cout<<_01<<" moeda(s) de R$ 0.01"<<endl;
}
