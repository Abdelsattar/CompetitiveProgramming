#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a,b,c,d;
	int abs1,abs2,abs3,ans4;
	cin>>a >> b >> c >> d ;
	for (int i=0;a!=b && b!=c && c!=d;i++)
	{
		a=a-b;
		a=abs(a);
		
	    b=b-c;
		b=abs(b);
		
	    c=c-d;
		c=abs(c);
		
		d=d-a;
		d=abs(d);
		cout <<a << b << c <<d<<endl ;
		
	}
   
   
    return 0;
}
