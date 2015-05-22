#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
   int tests,n;
   cin>>tests;

    while(tests--)
    {
        cin>>n;

        vector < int > vec(n);

        for(int i=0 ; i< n ; i++ )
            cin>>vec[i];
        sort(vec.begin() , vec.begin()+n);
        cout<<vec[n-1]<<endl;
    }
    return 0;
}
