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
  int N,count=0;
  cin >>N;
   vector <int> vec1(N);
   vector <int> vec2(N);

   for(int i=0 ;i <N ; i++)
    cin>>vec1[i]>>vec2[i];

    for(int i=0 ;i <N-1 ; i++)
    {
        for(int j=i+1 ; j < N ; j++)
        {
               // cout<<vec1[j]<<" "<<vec2[j]<<endl;
            if(vec1[j] == vec2[i])
                    count++;
            if( vec2[j] == vec1[i])
                count++;
        }
     //   cout<<endl;
    }
    cout<<count<<endl;
    return 0;
}

