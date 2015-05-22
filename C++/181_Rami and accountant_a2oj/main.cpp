#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
   int tests,s,k,tra;
   cin>>tests;
    string name,trans;
    while(tests--)
    {
        cin>>name;
        cin>>s>>k;

        for(int i=0 ;i< k; i++)
        {
            cin>>trans>>tra;
            if(trans=="buy")
                s-=tra;
            else
                s+=tra;
        }
      cout<<name<<" "<<s<<endl;
    }
    return 0;
}
