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
	int tests,time,tyb,jokti,sum=0;
	cin>>tests>>time;
	vector<int> vec(tests);
	
	for ( int i=0 ; i<tests ; i++)
		cin>>vec[i];
		
	tyb=(vec.size()-1)*10;
	for (int i=0 ; i<tests-1 ; i++)
	  tyb +=vec[i];
	
	 for (int i=0 ; i<tests ; i++)
	   sum+=vec[i];
	   
	   cout<<tyb<<endl;
	if(tyb <=time )
	{
		jokti=time-sum	;
		jokti/=5;
		if(jokti==0)
		cout<<"-1"<<endl;
		else
		cout<<jokti<<endl;
	}
	else 
	cout<<"-1"<<endl;
	
	return 0 ; 
}
