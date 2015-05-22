// Author : Mido_FCi
// 28-6-2014
// 11:38 Am
// tawe2et masry ^_^

#include <iostream>
#include <map>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    map <char , int > mymap;
    string word;

    getline(cin,word);

    for (int i = 0 ; i < word.size() ; i++)
     {
        if ( word[i]!='{' && word[i]!= ' ' && word[i]!= ',' && word[i]!= '}' )
             mymap[word[i]]++;

     }

     cout<<mymap.size()<<endl;
    return 0;
}
