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
  int t,max;
  string word;
  char ch;
  cin>>t;
  while(t--)
  {
      max=-1;
      cin>>word;
      map <char, int> mymap;
      map <char ,int > :: iterator iter;

      for(int i=0 ;i<word.size() ;i++ )
          mymap[word[i]]++;
    for(iter = mymap.begin() ; iter!=mymap.end() ;iter++)
    {
        if(iter->second >max)
        {
            max=iter->second;
            ch=iter-> first;
        }
    }
    cout<<max<<" "<<ch<<endl;
  }

    return 0;
}
