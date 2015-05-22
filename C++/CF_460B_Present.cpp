// Mido_Fci
// 20-8-2014
// 5:25 pm
// EL 3arei4
// ver: 2
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <sstream>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <stdio.h>
using namespace std;


int main()
{
    long long n,m,w,mn,count;
    cin>>n>>m>>w;
    vector<long long> vec(n);
    for(int i=0; i<n ;i++)
        {
            cin>>vec[i];
            if(i==0)
                mn=vec[i];
            if(vec[i]<mn)
                mn=vec[i];
        }
        vector<long long> ves;
    while(m--)
    {
            count=0;
            for()

        for(int i=0 ; i<w; i++)
                vec[i]++;

        for(int i=0; i<n ;i++)
          {
            if(i==0)
                mn=vec[i];
            if(vec[i]<mn)
                mn=vec[i];
          }
        ves.clear();
    }
     sort(vec.begin() ,vec.begin()+n);
        cout<<vec[0]<<endl;
    //    vector vec(ve(vec,min));

    return 0;
}

