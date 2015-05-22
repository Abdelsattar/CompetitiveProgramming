// Mido_Fci
// 19-8-2014
// 12:13 am
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
    long long n;
    cin>>n;
    vector <string> vec;
    vec.push_back("Sheldon");
    vec.push_back("Leonard");
    vec.push_back("Penny");
    vec.push_back("Rajesh");
    vec.push_back("Howard");
  // Sheldon, Leonard, Penny, Rajesh, Howard

    for(int i=0 ; i<n-1 ; i++)
    {
        vec.push_back(vec[0]);
        vec.push_back(vec[0]);
        vec.erase(vec.begin());
    }

    for(int i =0 ; i<n ; i++)
        cout<<vec[i]<<endl;
    cout<<endl<<vec[0]<<endl;
    return 0;
}

