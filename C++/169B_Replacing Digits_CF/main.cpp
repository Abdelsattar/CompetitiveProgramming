// Mido_Fci
// 30-7-2014
// 2: 18 am
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
    string a,b;
    cin>>a>>b;



        for(int i = 0 ; i <b.size() ; i++)      // a 123
        {
            for(int m = 0 ; m <a.size() ;m++)   // b 12
            {
                cout<<b[i]<<" "<<a[m]<<endl;
                if(b[i] > a[m])
                    {
                        a[m]=b[i];
                        break;
                    }

            }
        }

  /*  else
    {
        for(int i = 0 ; i <a.size() ; i++)   // a  12
        {
            for(int m = 0 ; m <b.size() ;m++) // b 123
            {
                if(b[i] > a[m])
                    {
                        a[m]=b[i];
                        break;
                    }

            }
        }
    }
*/
    cout<<a<<endl;
	return 0;
}
