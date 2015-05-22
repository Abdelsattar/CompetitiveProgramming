// Mido_Fci
// 1 - 82014
// 10 :59pm
// Ramadan
// EL 3arei4
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <sstream>
using namespace std;

int main()
{
  string word1, word2;
  cin>>word1>>word2;

  if(word1.size() != word2.size())
    {
        cout<<"NO"<<endl;
        return 0;
    }
    int sz=word2.size();
    for(int i=0 , m=sz-1 ; i<sz ; i++ , m--)
    {
        if(word1[i]!= word2[m])
        {
            cout<<"NO"<<endl;
            return 0 ;
        }
    }
    cout<<"YES"<<endl;

    return 0;
}
