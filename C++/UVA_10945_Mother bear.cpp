// Mido_Fci
// 15-8-2014
// 10:51am
// EL 3arei4
// ver: 2
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <sstream>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;


int main()
{
    string word;
    bool check;
    while(true)
    {
        check=true;
        getline(cin,word);
        if(word=="DONE")
            return 0;
        int sz=word.size()-1;
        for(int i=0 ; i<sz ; i++, sz--)
        {
            word[i]=tolower(word[i]);
            word[sz]=tolower(word[sz]);
            if( word[i]< 'a' || word[i] > 'z')
                sz++;
           else if( word[sz]< 'a' || word[sz] > 'z')
                i--;
            else  if(word[i]!=word[sz] && (word[i]!=' ' || word[sz]!=' '))
            {
                cout<<"Uh oh..\n";
                check=false;
                break;
            }

        }
        if(check)
        cout<<"You won't be eaten!"<<endl;
    }
    return 0;
}
