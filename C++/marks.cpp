// mido_fci
// 11-6-2014
// 11:14 pm
// FCI-CU - Egypt

#include <iostream>
#include <sstream>
#include <vector>

using namespace std;
int main ()
{
    int nSt,nSb , counter=0;
    cin>>nSt>>nSb;
    vector <string> vec(nSt);

    for (int i = 0 ; i< nSt ; i++)
    cin>>vec[i];

    bool check1 = true ,check2=false ;


    for (int i=0 ; i< nSt ; i++)
    {
         check2=false;
        for (int m =0 ; m <nSb ; m++)
        {
             check1 = true;
            for ( int j = 0 ; j < nSt ; j++)
            {
                if (vec[j][m]>vec[i][m])
                check1=false;
            }

            if(check1)
            check2=true;

        }
        if (check2)
        counter++;
    }

    cout<<counter <<endl;
    return 0;
}
