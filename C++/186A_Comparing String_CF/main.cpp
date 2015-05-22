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
    string word1,word2;
    cin>>word1>>word2;
    map <char , int> mymap1;
    map <char , int> mymap2;
    map <char , int > :: iterator iter1;
    map <char , int > :: iterator iter2;

    if(word1.size() != word2.size())
        {
            cout<<"NO"<<endl;
            return 0;
        }
        int count=0;
    for(int i= 0; i< word1.size() ; i++)
    {
        mymap1[word1[i]]++;
        mymap2[word2[i]]++;

        if(word1[i] != word2[i])
            count++;

    }
     if(count==2)
        {

            for(iter1 =mymap1.begin(), iter2 =mymap2.begin() ; iter1 !=mymap1.end() && iter2!= mymap2.end(); iter1++, iter2++)
            {
                if(iter1 -> first != iter2->first)
                {
                     cout<<"NO"<<endl;
                        return 0;
                }
            }
            if(iter1 !=mymap1.end() || iter2!= mymap2.end())
                {
                    cout<<"NO"<<endl;
                        return 0;

                }
            cout<<"YES"<<endl;
        }

    else
        cout<<"NO"<<endl;
	return 0;
}
