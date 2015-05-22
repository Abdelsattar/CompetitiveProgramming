// Mido_Fci
// 8-8-2014
// 6:40 pm
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
  int T,N;
  cin>>T;
  while(T--)
  {
      cin>>N;
      vector <int> vec(N);
      for(int i =0 ; i<N ;i++)
          cin>>vec[i];
      for(int i=0 ; vec.size()!=1; i++)
      {
          vec[0]+=vec[1];
          vec[0]-=2;
          vec.erase(vec.begin()+1);
        }
    cout<<vec[0]<<endl;

  }

    return 0;
}
