#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std ;
int main()
{
	int tests;
	 cin>>tests;
	 do
	 {
	 	if (tests == 0 )
	 	return 0;
	 	else 
	 	{
	 		
			 vector <string> vec(tests);
			 for(int i=0 ; i<tests ; i ++)
			 	cin>>vec[i];
			 int max;
			 for(int i=0 ; i<tests ; i ++)
			 	{
			 		if (i==0)
			 		max=vec[i].size();
			 		else if (max < vec[i].size())
			 			max=vec[i].size();	
			 	}
			 	
			 	for ( int i=0 ; i<tests  ; i++)
			 	{
			 		int sz=max-vec[i].size();
			 		for( ;sz>0 ;sz--)
			 		cout<<" ";
			 		cout<<vec[i]<<endl;
			 	}	 		
	 	}
	 	cin>>tests;
	 	
	 }	while (tests!=0);
	return 0;
}
