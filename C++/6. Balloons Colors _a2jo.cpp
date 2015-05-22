// Mido_Fci
// 4-7-2014 
// 00:25pm
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
	int tests;
	cin>>tests;
	int N,X,Y;
	bool esay, hard;
	
	while (tests--)
	{
		esay=hard=false;
		cin>>N>>X>>Y;
		
		vector <int> vec(N);
		
		for(int i=0 ; i< N ; i++)
			cin>>vec[i];
			
		if(vec[0]==X && vec[N-1]==Y)
			cout<<"BOTH"<<endl;
		else if (vec[0]==X)
			cout<<"EASY"<<endl;
		else if ( vec[N-1]==Y)
			cout<<"HARD"<<endl;
		else 
		cout<<"OKAY"<<endl;
		
	}
	return 0;
}
