// Mido_Fci
// 30-7-2014
// 2: 18 am
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
    string word;
    cin>>word;
    int count1=0 , count2 =0;

    for(int i=0 ; i<word.size() ; i++)
    {
        if(islower(word[i]))
            count1++;
        else
            count2++;
    }
    if(count2 > count1)
        for(int i=0 ; i<word.size() ; i++)
            word[i]=toupper(word[i]);

    else
        for(int i=0 ; i<word.size() ; i++)
            word[i]=tolower(word[i]);

        cout<<word<<endl;
	return 0;
}
