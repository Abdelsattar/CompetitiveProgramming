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
string tostr ( int num)
{
	string nu;
	stringstream ss;
	ss<<num;
	ss>>nu;
	return nu; 
}
int  tocint ( char num)
{
	int nu;
	stringstream ss;
	ss<<num;
	ss>>nu;
	return nu; 
}
int  toint ( string num)
{
	int nu;
	stringstream ss;
	ss<<num;
	ss>>nu;
	return nu; 
}
int main()
{
  string num,summ;
  int sum,x,y,tests;
  bool sttime;
  while(cin>>num)
  {
  	
  		
	  if (num[0]=='0')
 		 return 0;
 	 else if(num.size()==1)
 	 cout<<num;
 	 else
	  {
	  	sttime=false;
	  	do 
	  	{
	  		sum=0;
	  		if(sttime)
	  		{
	  			for(int i=0  ; i< summ.size() ; i++)
	  			{
	  				x=tocint(summ[i]);
	  			   sum+=x;
	  			}
	  		}
	  		else 
	  		{
	  			
	  			for(int i=0  ; i< num.size() ; i++)
	  			{
	  				x=tocint(num[i]);
	  		    	sttime=true;
	  	    	 	sum+=x;
	  			}
	  		}
	  		summ= tostr(sum);
	  		
	  	}while(summ.size()!=1);
	  	
	  	cout<<summ<<endl;
	  } 
 	 
  }

	return 0;
}
