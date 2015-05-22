// Mido_Fci
// 21-9-2014
// 6:49 pm
// EL 3arei4
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <sstream>
using namespace std;

int main()
{
   int num1,num2, nu1 , nu2;

   cin>>num1>>num2;

   nu1=num1/num2;
   nu2=num2/num1;

   double n1,n2;
   n1=(double) num1/num2;
   n2= (double) num2/num1;

   if((n1-nu1)==0 || (n2-nu2)==0)
        cout<<"Sao Multiplos"<<endl;
    else
        cout<<"Nao sao Multiplos"<<endl;

}
