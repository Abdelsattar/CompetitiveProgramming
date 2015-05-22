// Mido_Fci
// 9-8-2014
// 4:51:40 pm
// EL 3arei4
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
  int T,N,num,m;
  cin>>T;
  while(T--)
  {
      cin>>N;
      m=0;
      for(int i=0 ;i <N ;i++)
        {
            cin>>num;
            if(num>1)
                m++;
        }

        if(m>1)
            cout<<"ambiguous"<<endl;
        else
            cout<<"not ambiguous"<<endl;
  }

    return 0;
}
