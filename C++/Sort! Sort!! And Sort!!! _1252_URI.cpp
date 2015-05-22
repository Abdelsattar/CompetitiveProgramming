//mido_fci
//1-7-2014
// 2:42 pm 
// ACM_FCI_Cu

#include <iostream>
#include <map>
#include <vector>
using namespace std ;

int main ()
{
 	int M,N,elem,mod,od;
 	cin>>N>>M;
 	vector <int> oddd;
 	
 	do 
 	{
 		map <int,float> mymap;
 		map <int , float> :: iterator iter;
 		for (int i=0 ; i< N ; i++)
 		{
 			cin>>elem;
 			mod=elem%3;
 			mymap[elem]=mod;
 		}
 		cout<<N<<" "<<M<<endl;
 		for ( iter = mymap.begin() ; iter != mymap.end() ; iter++)
 		{
 			cout<<" iter -> "<<iter-> first <<" = "<<iter->second<<endl;
 			od=(iter-> first)%2;
 			if (iter->second && od)
 			{
 				oddd.push_back(iter->first);
 			}
 		}
 		cout<<endl;
 		for( int i = oddd.size()-1 ; i>=0 ; i--)
 		cout<<oddd[i]<<endl;
 		
 	}while (cin>>N>>M);
 	return 0;
}
