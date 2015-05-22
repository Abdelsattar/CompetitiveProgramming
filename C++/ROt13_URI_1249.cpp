#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std ;
int main()
{
	string word;
	while(getline(cin,word))
	{
		for ( int i =0 ; i< word.size() ; i++)
		{
			if((word[i]>'m' && word[i]<='z') | (word[i]>'M' && word[i]<='Z'))
			cout<< char(word[i]-13);
			else if ((word[i]>='a' && word[i]<='m') | (word[i]>'A' && word[i]<='M'))
			cout<< char(word[i]+13);
			else 
			cout<<word[i];
		}
		cout<<endl;
	}
	return 0;
}
