//mido_fci
//1-7-2014
// 2:42 pm 
// ACM_FCI_Cu

#include <iostream>
#include <vector>
using namespace std ;

int main ()
{
  int  N ,num1,num2;
  cin>>N;
 	do
 	{
 		num1=num2=1;
 		if(N==0)
 		return 0;
 		 		
 		for ( int i=0 ; i< N ; i++)
 		{		cout<<num1;
 				num2=num1;
 			for ( int m=0 ; m< N-1 ; m++)
 			{	num2*=2;
 				cout<<" "<<num2;
 			}
 			cout<<endl;
 			num1*=2;
 		}
 		cout<<endl;
 		cin>>N;
 		
 	}while(N!=0);
	return 0;
}
