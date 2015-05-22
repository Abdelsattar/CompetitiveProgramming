// Mido_Fci
// 3-7-2014 
// 1:15 am
// Ramadan 
// EL 3arei4 
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <sstream>
using namespace std;

int main()
{
	string word;
	while(getline(cin,word))
	{
		if(word[0]=='#')
		return 0;
		else 
		{
			map <char , int> mymap;
			map <char,int > ::iterator iter;
			vector <char> vec;
			bool on,to,th,fo,fiv;
			on=to=th=fo=fiv=false;
			for ( int i=0 ; i<word.size(); i++)  //e:5 i:5 a:3 o:2 u:1.
			{	
				if(word[i]=='a' | word[i]=='A')
				{
					if(!on)
					vec.push_back(word[i]);
					on=true;
					word[i]=tolower(word[i]);
					
					mymap[word[i]]++;
				}
				else if (word[i]=='e' | word[i]=='E')
				{
					if(!to)
					vec.push_back(word[i]);
					to=true;
					word[i]=tolower(word[i]);
					
					mymap[word[i]]++;
				}
				else if (word[i]=='I' | word[i]=='i' )
				{
					if(!th)
					vec.push_back(word[i]);
					th=true;
					
					word[i]=tolower(word[i]);
					mymap[word[i]]++;
				}
				else if (word[i]=='O' | word[i]=='o')
				{
					if(!fo)
					vec.push_back(word[i]);
					fo=true;
					
					word[i]=tolower(word[i]);
					mymap[word[i]]++;
				}
				else if (word[i]=='U' | word[i]=='u')
				{
					if(!fiv)
					vec.push_back(word[i]); 
					fiv=true;
					
					word[i]=tolower(word[i]);
					mymap[word[i]]++;
				}
			}
			
			for (int i=0 ; i<5 ; i++)
			{
				if(!on)
				{
					vec.push_back('a');
					on=true;
				}
				else if (!to)
				{
					vec.push_back('e');
					to=true;
				}
				else if (!th)
				{
					th=true;
				vec.push_back('i');
				}
				else if (!fo)
				{
					fo=true;
					vec.push_back('o');
				}
				else if(!fiv)
				{
					fiv=true;
					vec.push_back('u');
				}
			}
			for ( int i=0 ; i<5 ; i++)
			{
				if(i==0)
				cout<<vec[i]<<":"<<mymap[vec[i]];
				else 
				cout<<" "<<vec[i]<<":"<<mymap[vec[i]];
			}
			cout<<"."<<endl;
	
		}
	}
	return 0;
}
