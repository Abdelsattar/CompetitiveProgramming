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
 	vector <int> eveen;
 	vector <int> oddd2;
    vector <int> eveen2;
    vector <int> oddd3;
    vector <int> eveen3;

 	do
 	{
 	    if(N==0 && M==0)
 	    {
 	        cout<<"0 0"<<endl;
 	        return 0;
 	    }
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
 			od=(iter-> first)%2;
 			if (iter->second ==0&& od)
 			{
 				oddd.push_back(iter->first);
 			}
 			else if (iter->second ==0&& od==0)
 			{
 			    eveen.push_back(iter->first);
 			}
 			else if ( iter->second ==1 && od)
 			{
 			    oddd2.push_back(iter->first);
 			}
 			else if (iter->second ==1&& od==0)
 			{
 			    eveen2.push_back(iter->first);
 			}
 			else if ( iter->second ==2 && od)
 			{
 			    oddd3.push_back(iter->first);
 			}
 			else if (iter->second ==2&& od==0)
 			{
 			    eveen3.push_back(iter->first);
 			}
 		}
 		for( int i = oddd.size()-1 ; i>=0 ; i--)
 		cout<<oddd[i]<<endl;
 		for( int i = 0 ; i < eveen.size() ; i++)
 		cout<<eveen[i]<<endl;

 		for( int i = oddd2.size()-1 ; i>=0 ; i--)
 		cout<<oddd2[i]<<endl;
 		for( int i = 0 ; i < eveen2.size() ; i++)
 		cout<<eveen2[i]<<endl;

 		for( int i = oddd3.size()-1 ; i>=0 ; i--)
 		cout<<oddd3[i]<<endl;
 		for( int i = 0 ; i < eveen3.size() ; i++)
 		cout<<eveen3[i]<<endl;

 	}while (cin>>N>>M);
 	return 0;
}
