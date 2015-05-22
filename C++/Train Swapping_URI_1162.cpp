#include <iostream>
#include <vector>
using namespace std ;

int main ()
{
	int tests , l , count=0;
	cin>>tests;
	vector <int> vec(tests);
	
	for ( int q=0 ; q<tests ;q++)
	{
		cin>>l;
		count =0;
	for ( int i=0 ; i< l ; i ++)
	cin>>vec[i];
	
	for (int i=0 ; i<l-1  ; i++)
	{
		for ( int m =i+1; m <l ; m++)
		{
			if(vec[i] >vec[m])
			{
				int temp=vec[i];
				vec[i]=vec[m];
				vec[m]=temp	;		
				count++;
			}
		}
	}
	cout <<"Optimal train swapping takes "<<count<<" swaps."<<endl;

	}
	return 0 ;
	}
