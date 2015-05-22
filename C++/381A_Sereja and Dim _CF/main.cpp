//mido_fci
// ramada 27
// 27 - 7 - 2014
//  1:00 am
// el 3arie4
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
#include <map>
#include <iterator>
using namespace std;

int main()
{
   int n,ser =0,dim=0,m;
   cin>>n;

   vector <int> vec(n);

   for(int i=0 ;i<n ; i++)
    cin>>vec[i];

    for (int i=0 ; i <n ; i++)
    {
        if(vec.empty())
            break;
        if(vec[0] > vec[vec.size()-1])
        {
            ser+=vec[0];
            vec.erase(vec.begin());
        }
        else
        {
            ser+=vec[vec.size()-1];
            m=vec.size()-1;
            vec.erase(vec.begin()+m);
        }
        if(vec.empty())
            break;
        if(vec[0] > vec[vec.size()-1])
        {
            dim+=vec[0];
            vec.erase(vec.begin());
        }
        else
        {
            dim+=vec[vec.size()-1];
            m=vec.size()-1;
            vec.erase(vec.begin()+m);
        }

    }
    cout<<ser<<" "<<dim<<endl;
    return 0;
}
