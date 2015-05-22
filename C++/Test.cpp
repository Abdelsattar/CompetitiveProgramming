#include <iostream>
using namespace std ;
int main ()
{
	int m;
	cin>>m;
	if (m>=0 and m<100)
	{
	 if(m==42)
	 return 0;
	 else 
	cout<<m<<endl;
	}
	else 
	return 0;
	for (int i=0;m!=42;i++)
	{
		cin>>m;
	if(m==42)
	return 0;
	else 
	cout<<m<<endl;
   }
   
   return 0;
}
