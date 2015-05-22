#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	string word;
	int x;
	cin >> x ; 
	if (x>=100 || x<0)
	return 0;
	else 
	{
		for (int i = 0 ; i < x ; i++)
		{
			cin>>word;
			if(word.size()-1>100)
			return 0; 
			else if ( word.size()<=10)
			cout<<word<<endl;
						
			else 
			cout << word[0]<<word.size()-2<<word[word.size()-1]<<endl;
		
		}
    
	}

   
    return 0;
}
