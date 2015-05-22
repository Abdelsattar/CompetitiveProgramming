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
  int t,y1,y2,m1,m2;
  cin>>t;
  while(t)
  {
      cin>>y1>>m1>>y2>>m2;
      y1=y1+y2;
      m1=(m1+m2);
      if(m1>12)
      {
          y1++;
          m1-=12;
      }
      cout<<y1<< " "<<m1<<endl;
  }
    return 0;
}
