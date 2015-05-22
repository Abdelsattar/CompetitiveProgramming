// Mido_Fci
// 2-8-2014
// 10:14pm
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
    int num;
    cin>>num;
    if(num>=0)
        cout<<num<<endl;
    else
    {
        string s;
        stringstream ss, m;
        ss<<num;
        ss>>s;
        int sz=s.size()-1;
        if(s[sz] >s[sz-1])
            s.erase(sz,1);
        else
            s.erase(sz-1 ,1);

        m<<s;
        m>>num;
        cout<<num<<endl;
    }
    return 0;
}
