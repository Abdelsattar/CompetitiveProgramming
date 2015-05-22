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
int cuml(int n )
{
	int cum=0;
	for (int i=1 ; i<=n ;i++ )
	{
		cum+=i;
	}
	return cum;
}
int main()
{
	int tests,n,sum;
	cin>>tests;
	
	while(tests--)
	{
		sum=0;
		cin>>n;
		
		for(int i=1 ; i<=n ; i++)
		{
			cout<<i<<" "<<cuml(i+1)<<" "<<sum<<endl;
			sum+=(i*cuml(i+1));
		}
			cout<<sum<<endl;	
		
	}
	
	return 0 ; 
}
