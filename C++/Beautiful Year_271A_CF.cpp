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
using namespace std;
string tostr(int num)
{
	string s;
	stringstream ss;
	ss<<num;
	ss>>s;
	return s;
}
int toint( string num )
{
	int  n;
	stringstream ss;
	ss<<num;
	ss>>n;
	return n;
}
int main()
{
	int year;
	cin>>year;
	string Year;
	while (true)
	{
		year++;
		Year=tostr(year);
		
		if(Year[0]!= Year[1] && Year[0]!= Year[2] && Year[0] !=Year[3]
		  && Year[1]!= Year[2] && Year[1] != Year[3] && Year[2] !=Year[3])
		  {
		  	cout<<Year<<endl;
			return 0;
		  }
		
	}
	
	return 0 ;
}
