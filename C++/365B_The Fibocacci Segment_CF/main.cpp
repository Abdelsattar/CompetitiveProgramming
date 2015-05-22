// Mido_Fci
// 4-7-2014
// 01:44pm
// Ramadan
// EL 3arei4


// we23t m4 ma7lolas7

#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
    int n,num,x,y,count=1,k;

    cin>>n;
    vector <int> vec(n);
    vector <int> vec2;


    for(int i=0; i<n ;i++)
            cin>>vec[i];

        for(int i=0 ; i<n ;i++)
        {
            if(i>0)
            {
                if(vec[i-1]<=vec[i] )
                    {
                       k=i-1;
                       if(k>0)
                        {
                          if(vec[i]!=(vec[i-1]+vec[i-2]))
                            {
                                vec2.push_back(count);
                                count=1;
                            }
                        }
                     count++;
                    }
            }
        }
        vec2.push_back(count);

        if(vec2.size()==0)
            cout<<n<<endl;
        else
        {
            int ma=0;
            for(int i=0 ; i<vec2.size() ; i++)
            {
                if(vec2[i]>ma)
                    ma=vec2[i];
            }
            cout<<ma<<endl;
        }
    return 0;
}
