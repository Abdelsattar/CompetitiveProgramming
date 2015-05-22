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
int reversee(int num)
{
	int nu;
	string str1="",str2="";
	stringstream ss,s;
	ss<<num;
	ss>>str1;
	
	for(int i=0 ; i<str1.size() ; i++)
	{
		str2=str1[i]+str2;
	}
	s<<str2;
	s>>nu;
	return nu;
	
}
int main()
{
	int tests,num1,num2,sum; 
	cin >>tests;
	
	while(tests--)
	{
		cin>>num1>>num2;
	   num1 =reversee(num1);
	   num2=reversee(num2);
	   sum =num1+num2;
	   sum=reversee(sum);
	   cout<<sum<<endl;
	}
}
