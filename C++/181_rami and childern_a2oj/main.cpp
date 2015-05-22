//mido_fci
// TOurnamaent amed ali
// ramada 27
// 26 - 7 - 2014
// 1 :54 pm
// el 3arie4
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
   int tests,n,m,max,pos;
   cin>>tests;
    float v;
    while(tests--)
    {
        max=0;
        cin>>n>>m;
        vector < int > vec1(n);
        vector <int> vec2(n);

        for(int i=0 ; i< n ; i++ )
           {
                cin>>vec1[i];
                v= (float) vec1[i]/m;
                vec2[i]=ceil(v);
           }
        for(int i=0 ; i <n ; i++)
        {
            if(vec2[i]>=max)
            {

                max=vec2[i];
                pos=i;
            }
        }
        cout<<pos+1<<endl;
    }
    return 0;
}
