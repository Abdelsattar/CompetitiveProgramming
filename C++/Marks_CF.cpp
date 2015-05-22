#include <iostream> 
#include <vector>
#include <map>
using namespace std; 

int main ()
{
	int nSub,nStu,count=0;
	cin>>nSub>>nStu;
	string sub;
	vector <string> vec(nSub);
	
	for(int i=0 ; i< nSub ; i++)
		cin>>vec[i];	
		
		bool check=true;
	
	for( int i=0 ; i<nSub ; i++)
	{
		for(int m=0 ; m<nStu ; m++)
		{
			check=true;
			for (int q=0 ; q<nSub ; q++)
			{
				if(vec[i][m]<vec[q][m])
				{
					check = false;
				}
			}
			if(check)
			{
				count++;
				break;				
			}
			
		}
	}
	cout<<count<<endl;
	
}
