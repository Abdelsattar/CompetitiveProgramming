#include <iostream>
#include <vector>
#include <map>

using namespace std;
int main()
{
	long long x,y,fact1=1,fact2=1;
	while(cin>>x>>y)
	{
		fact1=1;
		fact2=1;
		for(int i=1 ; i<=x; i++)
			fact1*=i;
			
		for(int i=1 ; i<=y; i++)
			fact2*=i;
			
			long long sum;
			sum =fact1+fact2;
			cout<<fact1+fact2 <<endl;
	}
}
