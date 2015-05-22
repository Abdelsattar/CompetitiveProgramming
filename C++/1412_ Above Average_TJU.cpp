// Mido_Fci
// 5-7-2014 
// 1:46pm
// Ramadan 
// EL 3arei4 
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
using namespace std;
int main()
{
		float tests,n,m,sum,sum2,count;
		float avg,prec;
		cin>>tests;
		while (tests--)
		{
			count=sum=0;
			
			cin>>n;
			vector <float> vec1(n);
			for(int i=0 ; i<n ; i++)
			{
				cin>>m;
				vec1[i]=m;
				sum+=m;
			}
			avg=(float )sum/n;
			
			for(int i=0 ; i<n ; i++)
			{
				
				if(vec1[i]>avg)
				{
					count++;
					
				}
			}
			prec=count/n;
			prec*=100;
				cout.precision(3);
				cout<<fixed<<prec<<"%\n";
		}
		
}
