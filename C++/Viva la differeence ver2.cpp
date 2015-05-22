#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a,b,c,d , B;
	int abs1,abs2,abs3,ans4;
	
	while(cin>>a >> b >> c >> d ) 
	{
		if(a == 0 && b == 0 && c == 0 && d == 0 )break;
	if (a>=1 && b >= 1 && c>=1 &&  d>=1  )
	for (int i=1;a!=b || b!=c || c!=d;i++)
	{    abs1=a;
		a=a-b;
		a=abs(a);
		
	    b=b-c;
		b=abs(b);
		
	    c=c-d;
		c=abs(c);
		
		d=d-abs1;
		d=abs(d);
		
		B=i;
	}
	cout <<B<<endl;
    
 }
    return 0;
}
