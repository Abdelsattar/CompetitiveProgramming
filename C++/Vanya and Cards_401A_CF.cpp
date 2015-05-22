// Mido_Fci
// 8-7-2014 
// 4:47 am
// Ramadan 
// EL 3arei4 
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
using namespace std;
int main()
{
	int n,x,m,postive=0, negtive=0;
	cin>>n>>x;
	
	for(int i=0 ; i<n ; i++)
	{
		cin>>m;
		if(abs(m)<x)
		{
			if(m>0)
			postive++;
			else if (m<0)
			negtive++;
		}
	}
	cout<<abs(postive-negtive)<<endl;
	
	return 0;
}
