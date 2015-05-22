#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
  int tests,pos,l;
   cin>> tests;
   while(tests--)
   {
        cin>>l;
        vector <string> vec(l);

       for(int i=0 ;i < l ; i++)
            cin>>vec[i];

        reverse(vec.begin(),vec.end());

        cout<<vec[0];
        for(int i=1 ;i < l ; i++)
            cout<<" "<<vec[i];
            cout<<endl;
   }
   return 0;
}
