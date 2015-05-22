// Mido_Fci
// 4-7-2014
// 01:44pm
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
    int n,x=1,y ;

    cin>>n;
    y=n*n;

    for (int i=0 ; i<n ; i++ )
    {
        for ( int j=0 ; j<n ; j++ )
        {

            if ( j % 2 == 0 )
                cout << x++ << " " ;
            else
                cout << y-- << " " ;
        }
        cout << endl ;
    }
	return 0;
}
