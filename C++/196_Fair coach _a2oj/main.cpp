// Mido_Fci
// 9-8-2014
// 5:13 pm
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
  int T,N,to,deleted,moved,numOfProb;
  cin>>T;

  while(T--)
  {
      to=moved=0;
      cin>>N;

      vector <int> vec(N);
      for(int i=0 ; i<N ; i++)
      {
          cin>>vec[i];
          to+=vec[i];
      }
      deleted=to%N;
      numOfProb=to/N;

      for(int i=0 ;i <N ;i++)
      {
          if(vec[i]<numOfProb)
            moved+=numOfProb-vec[i];
      }
      cout<<deleted<<" "<<moved<<endl;
  }

    return 0;
}
