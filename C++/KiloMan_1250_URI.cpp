// Mido_Fci
// 3-7-2014 
// 2:46pm
// Ramadan 
// EL 3arei4 
#include <iostream>
#include <vector>
#include <map>

using namespace std;
int main()
{
	int tests,count,s;
	 cin >>tests;
	 string move;
	 while ( tests--)
	 {
	 	count=0;
	 	cin>>s;
	 	vector <int> vec(s);
	 	for ( int i =0 ; i<s ; i++)
	 		cin>>vec[i];
	 	cin>>move;
	 	
	 	for ( int i=0 ; i<s ;i++)
	 	{
	 		if(vec[i]>2 && move[i]=='J')
	 		 	count++;
	 		else if ( vec[i]<=2 && move[i]=='S')
	 			count++;
	 	}
	 	cout<<count<<endl;
	 	
	 }
}
