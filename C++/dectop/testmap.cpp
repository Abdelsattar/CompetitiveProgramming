// Program Name: Super Market Billing System.cpp
// Last Modification Date: 21-04-2014
// Author: Mohammed Abd El-Sattar Ahmed
// Purpose: ACM Training  
// ver : 01 

#include <iostream>
#include <map>

using namespace std;

int main ()
{
			float y,sub;
			int x,count=0,area;
			cin>>area;
			map <int, int > Element ;
			for (int i =1 ; i<area ; i++)
			{
				y=(float)area/i;
				x=area/i;
				cout<<y<<" "<<x<<endl;
				sub=(float)x-y;
				
				if(sub==0)
				{
					 
					 if(i==x)
					 {
					 	Element[i]=1;
					 	Element[x]=1;
					 }
					else if( ((i%2)==0 && (x%2)==0));
					else 					
					{
					 	Element[i]=1;
					 	Element[x]=1;
					}
				   
					}
			}
			cout<<Element.size();
			return 0 ; 
			
}

