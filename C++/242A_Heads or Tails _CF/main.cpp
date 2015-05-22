// Mido_Fci
// 30 -7-2014
// 10 :51 pm
// Ramadan
// EL 3arei4
// RECO is an Android App based on recommendations from your friends in more than 5 categories and u can post your opioion
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <sstream>
using namespace std;

int main()
{
    int x,y, a,b, count=0;
    cin>>x>>y>>a>>b;
    vector <int> vec1;
    vector <int >vec2;
    bool check =true;
    for(int i=a ; i<=x ; i++)
    {   check=false;
        if(b<i)
        {
            vec1.push_back(i);
            vec2.push_back(b);
        }
        //cout<<i<<" "<<b<<endl;
        for(int m=b+1 ; m<=y && m<i ; m++)
        {
            //cout<<i<<" "<<m<<endl;
            vec1.push_back(i);
            vec2.push_back(m);
        }
    }
    cout<<vec1.size()<<endl;
    for(int i=0 ; i<vec1.size() ; i++)
    {
        cout<<vec1[i] <<" "<<vec2[i]<<endl;
    }
    return 0;
}
