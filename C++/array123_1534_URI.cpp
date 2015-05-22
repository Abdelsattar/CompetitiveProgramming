#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std ;
int main()
{
	int tests;
	
	while ( cin >>tests)
	{
		if(tests<3 | tests>=70)
		return 0;
		vector <int> vec(tests,3);
		vec[0]=1;
		vec[tests-1]=2;
		for (int i=0 , q=tests-1; i<tests && q>=0 ; i++ , q--)
		{
			for(int m=0 ; m <tests; m++)
			 cout<<vec[m];
			 cout<<endl;
			 if(i+1==q)
			 {
			 	
			 int temp= vec[i];
			 vec[i]=vec[i+1];
			 vec[i+1]=temp;
			 }
			 else
			 {
			 int temp= vec[i];
			 vec[i]=vec[i+1];
			 vec[i+1]=temp;
			 
			 temp=vec[q];
			 vec[q]=vec[q-1];
			 vec[q-1]= temp;
			 }
			 
		}
	}
	
	return 0;
}
