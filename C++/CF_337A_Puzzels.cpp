// Mido_Fci
// 29-8-2014
// 2:25 pm
// EL 3arei4
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
    int n,m,num,A,min;
     cin>>n>>m;
    vector <int> vec(m);

    for(int i=0 ; i<m ;i++)
        cin>>vec[i];
     sort(vec.begin() ,vec.begin()+m);
//     for(int i=0 ; i<m ;i++)
//        cout<<vec[i]<<" ";
//        cout<<endl;
    for(int i = 0 ;(i+(n-1)) <m ;i++)
        {
            A=(vec[i+(n-1)]-vec[i]);
//  cout<<vec[i] << " "<<vec[i+(n-1)]<<" " <<" "<<A<<" "<<min<<endl;
            if(i==0)
                min=A;
            else if(A<min)
                min=A;
        }
        cout<<min<<endl;
       return 0;
}
