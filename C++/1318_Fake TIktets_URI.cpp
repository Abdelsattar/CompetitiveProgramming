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
	int nTik,N,m,count;
	
	while(cin>>nTik>>N)
	{
		if(nTik==0 && N==0)
		return 0;
		
		count=0;
		
		map <int , int> mymap;
		map <int , int > :: iterator iter;
		
		for(int i=0 ; i<N ;i++)
		 	{
		 		cin>>m;
		 		mymap[m]++;
		 	}
		for(iter = mymap.begin() ; iter!= mymap.end() ; iter++)
		{
			if(iter->second > 1 )
				count++;
		}
		 	
		cout<<count<<endl;
		mymap.clear();
	}
	
	return 0 ; 
}
