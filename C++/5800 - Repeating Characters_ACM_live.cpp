// Mido_Fci
// 5-7-2014 
// 1:46pm
// Ramadan 
// EL 3arei4 
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <sstream>
using namespace std;
int main()
{
	int tests,num,k,rep;
	cin>>tests;
	string word;
	
	for(int i=0 ; i<tests ;i ++)
	{
		cin>>k>>rep;
		cin>>word;
		cout<<k<<" ";
		for(int i=0 ;i<word.size() ;i++)
		{
			for (int m=0 ; m<rep ; m++)
			{
				cout<<word[i];
			}
		}
		cout<<endl;
	}
	return 0;
	
}

	
