#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long  a, b, c, x ;
    cin >> x;
    if(x<20)
    {
    for ( int i = 1 ; i <=x ; i++ )
    { 
    cin >> a >> b >> c;
    // check whether a, b, c can form a triangle
    if (a+b > c && a+c > b && b+c > a)
       {
       	  if ( a == b && a==c)
       	  {
       	  	cout << "Case "<<i<<": Equilateral"<<endl ; 
       	  }
       	  else if ((a==b && a!=c) || (a==c && a!=b) || (b==c && a!=b ) )
       	  {
       	  	cout << "Case "<< i <<": Isosceles"<<endl;
       	  	
       	  }
       	  else if ((a!=b && b!=c && c!=a ) )
       	  cout << "Case "<< i<<": Scalene" <<endl; 
       	  
       }    
		
	 else
        cout <<"Case "<<i<< ": Invalid" <<endl;
    
      }
   }
   else 
   return 0; 
  
   
    return 0;
}
