// Mido_Fci
// 6-8-2014
// 01:36 am
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
    int n,k;
    long long Valeramoney,itemprice;
    cin>>n>>Valeramoney;
    vector <int> vec;
    bool check;
    for(int i=0 ; i<n ; i++)
    {
        cin>>k;
        check= false;
        for(int m=0 ;m <k; m++)
        {
            cin>>itemprice;
            if(Valeramoney >itemprice && !check)
                {
                    vec.push_back(i+1);
                    check=true;
                }
        }
    }
    cout<<vec.size()<<endl;
    for(int i=0 ; i<vec.size() ;i++ )
        cout<<vec[i]<<" ";
    cout<<endl;
    return 0;
}
