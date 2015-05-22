// Mido_Fci
// 4-7-2014
// 01:44pm
// Ramadan
// EL 3arei4
/*#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <sstream>
using namespace std;

int main()
{
	int nums,count=0, max=0 , min=101;
	cin>>nums;
	vector <int > vec(nums);

	for (int i =0 ;i < nums ;i ++)
        cin>>vec[i];
    int temp;
    for (int i =0 ;i<nums ;i++)
    {
        if(vec[i]>max)
            max=i;
        if(vec[i]<min)
            min=i;
    }
    return 0;
}*/
#include<iostream>
#include <vector>
using namespace std ;
int main()
{
   int x,y,min=101,u, max=0,m=0,n=0,z=0;
    cin >>x;
    vector <int> vec(x);

    for (int i=0 ; i<x ; i++)
    {
        cin>>vec[i];
      if( vec[i]<=min )
        {
            min=vec[i];
            n=i;
        }
       if( vec[i]> max)
        {
            max=vec[i];
            m=i;
        }
    }

    if ( m >n)
        x=x-2;
    else
        x=x-1;

     n=x-n;
     z=m+n;

        cout<<z<<endl;
        return 0;


}
