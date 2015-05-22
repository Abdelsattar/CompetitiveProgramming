// Mido_Fci
// 3-7-2014 
// 1:15 am
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

	double balance, sum=0;
	
	for(int i=0 ; i<12 ; i++)
	{
		cin>>balance; 
		sum+=balance;
	}
	
	cout<<"$"<<(sum/12)<<endl;
	

}
