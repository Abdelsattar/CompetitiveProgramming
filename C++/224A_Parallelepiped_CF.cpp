// Mido_Fci
// 6-8-2014
// 3:28 am
// EL 3arei4
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <sstream>
using namespace std;

int main()
{
  int a,b,c,s1,s2,s3;
  cin>>a>>b>>c;

  s1=a*b;
  s2=b*c;
  s3=c*a;
  a=sqrt((s1*s3)/s2);
  b=sqrt((s1*s2)/s3);
  a=sqrt((s2*s3)/s1);
    cout<<a<<" "<<b<<" "<<c<<endl;
  cout<<4*(a+b+c)<<endl;
    return 0;
}
