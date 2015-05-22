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
	long long int tests,num,rem,cand,sum;
	cin>>tests;
	while(tests--)
	{
		cin>>num;
		sum=0;
		for(long long int  i=0 ;i <num ; i++)
			{
				cin>>cand;
				sum+=cand;
			}
			rem=sum%num;
		if(rem==0)
		cout<<"YES"<<endl;
		else 
		cout<<"NO"<<endl;
	}
return 0 ;
}
