#include <iostream>
#include <map>

using namespace std ;
int main ()
{
	
	
	int n,k,m=0;
	cin>>n>>k;
	if (n==0 && n==0)
	return 0;
	
	map <int ,int > mymap;
	map <int ,int> :: iterator iter;
	for ( int i=0 ; i< n ; i++ )
	{
		cin>>m;
		map[m]++;
		
	}
	
	for (iter = mymap.beging() , iter!=mymap.end() , iter++)
	{
		if(iter->second >= k)
		 m=iter->first;
	}
	
	cout<<m<<endl;
	return 0 ; 
	
}
