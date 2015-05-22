#include <iostream>

using namespace std;
int main ()
{
	
	int x,arr[100]; 
	cin>>x;
	for (int i=0;i<x;i++)
	{
		cin>>arr[i];
	}
	for (int i=1;i<=x;i++)
	{
		for (int endx=0;endx<x;endx++)
		{
			if(arr[endx]==i)
			{
				cout<<endx<<" ";
				break;
			}
		}
	}
	
	return 0;
	
	}
