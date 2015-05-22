#include <iostream>
#include <map>

using namespace std ;
int main ()
{


	int n,k,m,l=0;

	cin>>n>>k;

	do
	{
	 if (n==0 && n==0)
	return 0;
         l=0;
	map <int ,int > mymap;
	map <int ,int> :: iterator iter;
	for ( int i=0 ; i< n ; i++ )
	{
		cin>>m;
		mymap[m]++;
	}
	for (iter = mymap.begin() ; iter!=mymap.end() ; iter++)
	{
	   	if(iter->second >=k)
        l=iter->first;
	}
	    cout<<l<<endl;
        cin>>n>>k;
	}while ( n!=0 && k!=0);
    return 0 ;

}
