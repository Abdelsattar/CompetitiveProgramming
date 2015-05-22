// Mido_Fci
// 30 -7-2014
// 12:45 pm
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
    int n, scor, max,pos=0;
    cin>>n;
        string name;
    vector <string> vec1;
    vector <int> vec2;
    bool check=true;

    for(int i=0 ; i<n ; i++)
        {
            check=true;
            cin>>name>>scor;

                if(i==0)
                    max=scor;
            for(int m=0 ; m<vec1.size() ;m++)
                {
                    if(vec1[m]==name)
                    {
                        check=false;
                        vec2[m]+=scor;

                        if(vec2[m] > vec2[pos] )
                            pos=m;
                        break;

                    }
                }
            if(check)
            {
                vec1.push_back(name);
                vec2.push_back(scor);
               if(scor > vec2[pos])
                    pos= vec2.size()-1;

            }

        }

        cout<<vec1[pos]<<endl;
        return 0;
}
