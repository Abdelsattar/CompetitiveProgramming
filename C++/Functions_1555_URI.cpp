// Mido_Fci
// 3-7-2014 
// 2:46pm
// Ramadan 
// EL 3arei4 
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
using namespace std;
int main()
{
	int tests,x,y,r,b,c;
	 cin>>tests;
	 while(tests--)
	 {
	 	cin>>x>>y;
	 	
	 	r=((3*x)*(3*x))+ (y*y);
	 	b= ((2*(x*x))+ (5*y) * (5*y));
	 	c= -100*x + (y*y*y);
	 	if( r > b && r>c )
	 	cout<<"Rafael ganhou"<<endl;
	 	else if ( b > r && b > c)
	 	cout<<"Beto ganhou"<<endl;
	 	else 
	 	cout<<"Carlos ganhou"<<endl;
	 	

	 }
	
	//the function that Rafael chose is r(x, y) = (3x)² + y².
	//Beto chose the function b(x, y) = 2(x²) + (5y)².
	//Carlos, however, chose the function c(x, y) = -100x + y³
}
