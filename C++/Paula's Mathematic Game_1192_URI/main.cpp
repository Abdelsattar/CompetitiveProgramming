#include <iostream>
#include <sstream>
#include <ctype.h>
#include <stdlib.h>
using namespace std;

int  trans(char k)
{
    int word;
    stringstream ss;
    ss<<k;
    ss>>word;
    return word;
}

int main()
{
    int test,n1,n2;
    cin>>test;
    string word;
     for ( int i=0 ; i<test ; i++)
     {
         cin >>word;

            n1=trans(word[0]);
            n2=trans(word[2]);
         if(word[0]==word[2])
            cout<<(n1*n2)<<endl;

        else if ( isupper(word[1]))
        cout<< n2-n1<<endl;
        else
        cout<< (n1+n2)<<endl;
     }

     return 0;
}
