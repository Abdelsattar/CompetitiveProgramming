// Mido_Fci
// 3-7-2014 
// 2:46pm
// Ramadan 
// EL 3arei4 
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
using namespace std;
int main()
{
	int n , b; 
	
	while ( cin >> n>>b)
	{
		if( n ==0 && b ==0)
			return 0;
		vector <int> vec(n);
		
		for ( int i=0 ; i<n ; i++)
			cin>>vec[i];
		map <int , int > mymap;
		map <int , int > ::iterator iter;
		int diff;
		for ( int i=0 ; i<n-1; i++)
			{
				diff=abs(vec[i]-vec[i+1]);
				mymap[diff]++;
			}
			bool check=true;
			iter = mymap.begin();
		for( int i=1 ; i<=n ;i++, iter++ )
		{
			cout<<iter->first<<" "<<iter->second<<" "<<i<<endl;
			if (iter->first != i)
			{
				cout<<"N"<<endl;
				check=false;
				break;
			}
		}
		if(check)
		cout<<"Y"<<endl;			
	}

	return 0 ; 
}
