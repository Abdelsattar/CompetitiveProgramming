#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
    int n,count=1;
    cin >>n ;
    vector <int> vec(10);
    while (n--)
    {
        cin>>count;
        for(int i=0 ; i<10 ; i++)
            cin>>vec[i];

        sort(vec.begin() , vec.begin()+10);
        cout<<count<<" "<<vec[7]<<endl;
    }
}
