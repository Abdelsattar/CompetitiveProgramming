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
#include <stdio.h>
using namespace std;


int main()
{
    string word;
    int T,m=0;
    //cin>>T;
    scanf("%d",&T);
        map <char,int> mymap;
        map <char,int>  :: iterator iter;  // a 97 z 122
        int count=1,to,ASC=97 sz=word.size();
        char ch;
        for(int i = 0 ; i< 26 ; i++)
        {
            ch= (char)ASC;
            if(ch=='s' || ch=='z')
                {
                    mymap[ch]=4;
                    count=1;
                }
            else
                mymap[ch]=count++;
            if(count==4)
                count=1;
                ASC++;
        }
    while(T--)
    {
        to=0;
        getline(cin,word);
       // scanf("%100",&word);
        for(int i = 0 ; i<sz ; i++)
                to+=mymap[word[i]];
            m++;
        cout<<"Case #"<<m<<": "<<to<<endl;
    }
    return 0;
}
