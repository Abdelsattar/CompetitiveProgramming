#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
#include <sstream>
using namespace std ;
int main()
{
	string word,intg;
	while(cin>>word)
	{
		float cutof;
		cin>>cutof;
		int sz=word.size();
		bool pointexist=false;
		for(int i =0 ; i< sz ; i++ )
		 {
		 	 if(word[i]=='.' && i+1 ==sz )
		 	{
		 		int l;
		 		stringstream ss;
		 		ss<<word;
		 		ss>>l;
		 		cout<<l<<endl;
		 		pointexist=true;
		 		break;
		 	}
		 	else if(word[i]=='.' )
		 	{
		 		intg=word.substr(i,(sz-i));				
				float l,num ;
		 		stringstream ss,s;
		 		ss<<intg;
		 		ss>>l;
		 		
		 		s<<word;
		 		s>>num;
		 		
		 		if(l >cutof)
		 		cout<<ceil(num)<<endl;	
		 		else 
		 		cout<<floor(num)<<endl;
		 		pointexist=true;
		 	}
		 } 
		 if(!pointexist)
		 cout<<word<<endl;
	}
	return 0;
}
