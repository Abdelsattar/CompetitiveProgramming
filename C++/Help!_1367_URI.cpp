#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std ;
int main()
{
	int tests;
	
	while ( cin>>tests)
	{
		 if(tests==0)
		 return 0;
		 
		 char ch; 
		 int time,sum=0,count=0;
		 string ans;
		 bool check=false;
		 for ( int i=0 ; i<tests ; i++)
		 {
		 	 cin>>ch>>time>>ans;
		 	 
		 	 if(ans=="correct")
		 	 {
		 	 	sum+=time;
		 	 		count++;
				  if(check)
		 	 	{
		 	 		sum+=20;
		 	 		check=false;
		 	 	}
		 	 }
		 	 else if (ans=="incorrect")
		 	 {
		 	 	check=true;
		 	 }
		 }
		 
		 cout<<count<<" "<<sum<<endl;
	}


	return 0;
}
