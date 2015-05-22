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
   string TheName;
   cin>>TheName;

   if(islower(TheName[0]))
        TheName[0]=toupper(TheName[0]);

    cout<<TheName<<endl;
}
