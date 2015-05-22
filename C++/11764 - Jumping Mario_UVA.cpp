// Mido_Fci
// 5-7-2014 
// 1:46pm
// Ramadan 
// EL 3arei4 
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
using namespace std;
int main()
{
		int tests,t,count1,count2;
		cin>>tests;
		
		for (int m=1 ; m<=tests ; m++)
		{
				cin>>t; 
			count1=count2=0;
			vector < int > vec(t);
			
			for(int i =0 ; i<t ; i++)
				cin>>vec[i];
			for (int i=0 ; i<t-1 ; i++)
			{
				if(vec[i]-vec[i+1] >0)
				  count2++;
				else if (vec[i]-vec[i+1] <0)
					count1++;	  
			}
			 
			cout<<"Case "<<m<<": "<<count1<<" "<<count2<<endl;
		}
	return 0 ; 
}
