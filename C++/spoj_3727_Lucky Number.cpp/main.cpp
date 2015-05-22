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
    vector <int> vec;
    int num,T,L;
    for(int i=1 ; i<11; i++)
       {
           num=pow(5,i);
           vec.push_back(num);
            for(int m=1 ; m<i ; m++)
            {
                L=num+pow(5,m);
                vec.push_back(L);
            }
       }
       for (int i=0 ;i<vec.size() ; i++)
            cout<<vec[i]<<endl;
       cin>>T;
       while(T--)
       {
           cin>>num;
           cout<<vec[--num]<<endl;
       }
       return 0;
}
