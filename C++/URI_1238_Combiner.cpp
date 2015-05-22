// Mido_Fci
// 21-9-2014
// 8:10 pm
// EL 3arei4
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <sstream>
using namespace std;

int main()
{
    string word1,word2;
    int sz1,sz2;
    int T;
    cin>>T;
    while(T--)
    {
            cin>>word1>>word2;
    sz1=word1.size();
    sz2=word2.size();
    if(sz1<sz2 )
    {
        for(int i=0; i <sz1 ; i++)
            cout<<word1[i]<<word2[i];
        for(int i=sz1; i<sz2 ; i++)
            cout<<word2[i];
        cout<<endl;
    }
    else
    {
        for(int i=0; i <sz2 ; i++)
            cout<<word1[i]<<word2[i];
        for(int i=sz2; i<sz1 ; i++)
            cout<<word1[i];
        cout<<endl;
    }

    }
}
