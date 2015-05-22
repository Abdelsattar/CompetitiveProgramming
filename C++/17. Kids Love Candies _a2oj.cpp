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
	int tests;
	cin>>tests;
	int N,K,m,sum;
	
	while (tests--)
	{
		sum=0;
		cin>>N>>K;
		
		for(int i=0 ; i< N ; i++)
		{
			cin>>m;
			sum+=(m/K);
		}
		
		cout<<sum<<endl;
	}
	return 0;
}
