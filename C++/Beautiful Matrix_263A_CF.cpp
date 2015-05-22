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
		int posr,posc, sum;
		int arr[5][5];
		
		for (int i=0 ; i<5 ;i++)
			for(int j=0 ; j <5 ; j++)
				cin>>arr[i][j];
		for (int i=0 ; i<5 ;i++)
		{
			for(int j=0 ; j <5 ; j++)
			{
				if(arr[i][j]==1)
				{
					posr=i+1;
					posc=j+1;
				}
			}
		}
		sum= abs(posr-3) + abs(posc-3);
		cout<<sum<<endl;
	return 0 ; 
}
