#include <iostream>
#include <vector>
using namespace std ;

int main ()
{
	int tests;
	string comm;
	char weg='N';
	cin>>tests;
	if (tests==0)
	return 0 ;
	do
	{
		cin>>comm;
		weg='N';
		for ( int i= 0 ; i < tests ; i++)
		{
			if(comm[i]=='E')  // left 
			{
				switch (weg)
				{
					case 'N':  //north 
						{
							weg='O'; break;
						}
					case 'O':  // west 
						{
							weg='S'; break;
						}
					case 'L':  // east
						{
							weg='N'; break;
						}
					case 'S': //south 
						{
							weg='L'; break;
						}
						
				}
			}
			else  // right
			{
				switch (weg)
				{
					
				case 'N':
						{
							weg='L'; break;
						}
					case 'O':
						{
							weg='N'; break;
						}
				 case 'S':
						{
							weg='O'; break;
						}
					case 'L':
						{
							weg='S'; break;
						}
			
				}
			}
			
		}
		cout<<weg<<endl;
		cin>>tests;
		
	}while (tests);

	return 0 ;
}
