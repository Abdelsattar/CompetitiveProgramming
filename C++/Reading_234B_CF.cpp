// Mido_Fci
// 10-7-2014 
// 1:58pm
// Ramadan 
// EL 3arei4 
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include<sstream>
#include <algorithm>
using namespace std;


int main()
{
	int n,k,min,pos;
	cin>>n>>k;
	
	vector <int> vec(n);
	vector<int>::iterator it;
	for(int i=0 ;i <n ;i++)
		cin>>vec[i];
	vector <int> vec2=vec;
	vector <int> vecp(k);
	vecp.clear();
	
	sort(vec2.begin() ,vec2.begin()+n , greater <int>());
	cout<<vec2[k-1]<<endl;
	
	for(int i=0; i<k ;i++)
	{
		for(int m=0 ; m<n; m++)
			{
				if(i==0 && vec2[i]==vec[m] )
				 {
				 	vecp[i]=(m+1);
					break ;
				 }
				if(vec2[i]==vec[m] && m+1!=vecp[i-1])
				{
					vecp[i]=(m+1);
					break ;
				}
			}		
	}
	sort(vecp.begin() , vecp.end()+k);
	
	cout<<vecp[0];
	for(int i=1; i<k ;i++)
		cout<<" "<<vecp[i];
	cout<<endl;	
	return 0 ;
}
