//mido_fci
//1-7-2014
// 2:42 pm 
// ACM_FCI_Cu

#include <iostream>
#include <vector>
using namespace std ;

int main ()
{
	int tests,count,pos=-1 ; 
	cin>>tests; 
	
	vector < int > vec(5);
	do
	{
		if ( tests ==0 )
		return 0 ;
		 
		for (int m=0 ; m<tests ; m++)
		{
			count =0;
			 
			 for ( int i=0 ; i< 5 ; i++)
			 cin>>vec[i];
		 
			 for (int i=0 ; i<5;i++)
			 {
			 	if(vec[i]<=127)
			 	{
			 		count++;
			 		pos=i;
			 	}
			}
			if ( count ==1)
			{
				switch (pos)
				{
					case 0:
						{
							cout<<"A"<<endl;
							break;
						}
					case 1:
						{
							cout<<"B"<<endl;
							break;
						}
					case 2:
						{
							cout<<"C"<<endl;
							break;
						}
					case 3:
						{
							cout<<"D"<<endl;
							break;
						}
					case 4:
						{
							cout<<"E"<<endl;
							break;
						}
				}
			}
			
			else
			{
				cout<<"*"<<endl;
			}
			 
		}
		 
		 cin>>tests;
	}while(tests!=0);
	
	return 0;
}
