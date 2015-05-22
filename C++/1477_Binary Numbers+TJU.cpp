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
	int tests,num,rem;
	cin>>tests;
	while(tests--)
	{
		cin>>num;
		vector <int> vec;
		for(int i=0 ; num/2!=0 ; i++)
		{
			rem=num%2;
			vec.push_back(rem);
			num/=2;
		}
		rem=num%2;
		vec.push_back(rem);
		bool check=true;
		for(int i=0 ; i<vec.size() ; i++)
		{
			if(check && vec[i]==1)
			{
				cout<<i;
				check=false;
			}
			else if(vec[i]==1)
			cout<<" "<<i;
			
		}
		cout<<endl;
	}
}
