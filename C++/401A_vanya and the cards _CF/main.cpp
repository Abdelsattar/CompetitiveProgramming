// Mido_Fci
// 31-7-2014
// 6 :31 am
// Ramadan
// EL 3arei4
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
using namespace std;
int main()
{
	double n,x,m, sum=0;
	cin>>n>>x;

	for(int i=0 ; i<n ; i++)
	{
		cin>>m;
		sum+=m;
	}
	sum= abs(sum);
	sum= ceil(sum/x);

	cout<<sum<<endl;

	return 0;
}
