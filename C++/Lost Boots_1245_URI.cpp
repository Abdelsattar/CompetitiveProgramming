//mido_fci
//1-7-2014
// 2:42 pm 
// ACM_FCI_Cu


//mido_fci
//1-7-2014
// 2:42 pm 
// ACM_FCI_Cu


#include <iostream>
#include <vector>
using namespace std ;

int main ()
{
	int tests,count;
	
	while(cin>>tests)
	{
		vector <int> vec1(tests);
		string vec2="";
		char ch;
		count=0;
		for ( int i =0 ; i<tests ; i++)
			{
				cin>>vec1[i]>>ch;
				vec2+=ch;
			}
			
		for ( int i =0 ; i< tests-1 ; i++)
		{
			for ( int m=i+1 ; m<tests ; m++)
			{
				if (vec1[i]==vec1[m] && vec2[i]!=vec2[m] && vec1[i]!=0)
				{
					count ++;
					vec1[i]=vec1[m]=0;
				}
			}
		}	
		cout<<count<<endl;
	}

	return 0;
}
/*
#include <iostream>
#include <vector>
using namespace std ;

int main ()
{
	int tests,count;
	
	while(cin>>tests)
	{
		vector <int> vec1(tests);
		vector <char> vec2 (tests);
		count=0;
		for ( int i =0 ; i<tests ; i++)
			cin>>vec1[i]>>vec2[i];
			
		for ( int i =0 ; i< tests-1 ; i++)
		{
			for ( int m=i+1 ; m<tests ; m++)
			{
				if (vec1[i]==vec1[m] && vec2[i]!=vec2[m] && vec1[i]!=0)
				{
					count ++;
					vec1[i]=vec1[m]=0;
				}
			}
		}
		
		cout<<count<<endl;
	}

	return 0;
}*/
