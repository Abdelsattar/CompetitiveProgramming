// Mido_Fci
// 9-8-2014
// 00:57 am
// EL 3arei4
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <sstream>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

int toint(char n)
{
    int num;
    stringstream s;
    s<<n;
    s>>num;
    return num;
}

int main()
{
    int T;
    cin>>T;
    string word;
    while(T--)
    {
        cin>>word;
        if(word.size()==5)
            cout<<3<<endl;
        else
        {
            if(word[0]=='o' && word[1]=='n' || word[0]=='o' &&word[2]=='e'
               || word[1]== 'n' && word[2]=='e' || word[0]=='o' && word[1]!='w')
               cout<<1<<endl;
            else
                cout<<2<<endl;

        }
    }
    return 0;
}
