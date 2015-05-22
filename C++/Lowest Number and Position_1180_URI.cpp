#include <iostream>
#include <vector>
using namespace std ;

int main ()
{
	int sz,min,pos=0;
	cin>>sz;
	vector <int > vec(sz);
	
	for (int i=0 ;i<sz ;i++)
	cin>>vec[i];
	
	for ( int i= 0 ; i<sz ; i++)
	{
		if(i==0)
		min=vec[0];
		if(vec[i]<min)
		{
			min=vec[i];
			pos=i;
		}
	}
	cout<<"Menor valor: "<<min<<endl<<"Posicao: "<<pos<<endl;
	return 0 ;
	
}
