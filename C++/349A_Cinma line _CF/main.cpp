// Mido_fci
// 29-7-2014
// 7:14 pm
// 2nd Day 3eed
// EL 3arei4
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int tests,m;
    cin >> tests;
     map <int , int> mymap;
     vector <int> vec(tests);
     for(int i=0 ;i < tests ;i++)
        cin>>vec[i];
    for(int i=0 ;i < tests; i++)
        {
            m=vec[i];
            if (m==50)
                {
                    if(mymap[25]>0)
                        mymap[25]--;
                    else
                    {
                        cout<<"NO"<<endl;
                        return 0;
                    }
                }
            else if(m==100)
            {
                if(mymap[25] >0 && mymap[50] >0 )
                {
                    mymap[25]--;
                    mymap[50]--;
                }
                else if (mymap[25]>2)
                {
                     mymap[25]-=3;
                }
                else
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
            mymap[m]++;
        }

        cout<<"YES"<<endl;
    return 0;
}
