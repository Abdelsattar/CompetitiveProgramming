// Mido_Fci
// 7-8-2014
// 8:41 pm
// EL 3arei4
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <sstream>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==-1)
            return 0;
        vector <int> vec;
        double num;
        int num1,to=0;

        for(int i=n ; i>1 ; i--)
        {
            num= (double)n/i;
            num1=(n/i);
            if(num-num1 ==0)
                {
                    vec.push_back(num1);
                    to+=num1;
                }
        }
       if(to!=n)
        cout<<n<<" is NOT perfect."<<endl;
        else
        {
            cout<<n<<" = "<<vec[0];
            for(int i=1 ; i<vec.size() ; i++)
                cout<<" + "<<vec[i];
            cout<<endl;
        }
    }
    return 0;
}
