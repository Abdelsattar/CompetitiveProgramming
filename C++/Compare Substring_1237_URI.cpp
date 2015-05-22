#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std ;
int main()
{
	string word1,word2;
	while(getline(cin,word1))
	{	
		getline(cin,word2);
		bool checkmax ,exist=false;
		int min,max,count=0;
		map <char ,int> mymap;
		map <char, int > ::iterator iter;
		
		if(word1.size() >= word2.size())
		{
			min=word2.size();
			max=word1.size();
			checkmax=true;
		}
		else 
		{
			 checkmax=false ;
			 max=word2.size();
			 min=word1.size();
		}
		for(int i=0  ; i <max ; i++) 
		{
			for ( int l=0 ; l< min ; l++)
			{
				
				if(checkmax)
				{
				 	if(word1[i]==word2[l] && word1[i]!=' ' )
					 	mymap[word1[i]]++;
				
				}
				else
				{
					if(word1[l]==word2[i] && word1[i]!=' ')
					{
						 mymap[word1[l]]++;
						 iter =mymap.begin();
					}
				}			
			}
			if(exist)
			count++;
			exist=false;
		}
		cout<<mymap.size()<<endl;
	}
	return 0;
}
