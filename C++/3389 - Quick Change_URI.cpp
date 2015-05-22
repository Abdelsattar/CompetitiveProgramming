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
	
	int cents,tests,dol;
	cin>>tests;
	
	for (int i=1 ; i<=tests ; i++ )
	{
		cin>>cents;		
		cout<<i<<" "<<cents/25<<" QUARTER(S), ";
		cents%=25;
		cout<<cents/10<<" DIME(S), " ;
		cents%=10;
		cout<<cents/5<<" NICKEL(S), ";
		cents=cents%5;
		cout<<cents<<" PENNY(S)"<<endl;
	}
	
	return 0 ;
}

