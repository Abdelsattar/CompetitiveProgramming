
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
    int num1,num2;
   while(cin>>num1>>num2)
   {
    if(num1==num2)
        break;
    if(num1>num2)
        cout<<"Decrescente"<<endl;
    else
        cout<<"Crescente"<<endl;
   }
    return 0;
}



