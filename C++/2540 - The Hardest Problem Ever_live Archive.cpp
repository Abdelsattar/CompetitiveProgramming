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
	string st,en,word;
	while(cin>>st)
	{
		if(st=="ENDOFINPUT")   //A B C D E
		return 0;			  //V W X Y Z
		getline(cin,word);
		cin>>en;
		for(int i=0 ; i<word.size() ; i++)
		{
			cout<<"Fuck\n";
			if (word[i]=='A')
			cout<<"V";
			else if ( word[i]=='B')
			cout<<"W";
			else if (word[i]=='C')
			cout<<"X";
			else if(word[i]=='D')
			cout<<"Y";
			else if (word[i]=='Z')
			cout<<"E";
			else if (word[i]==' ')
			cout<<" ";
			else if (word[i]>'E' || word[i]<= 'Z')
			{
				cout<<(char)(word[i]-5);
			}
			else 
			cout<<word[i];
			
		}
		cout<<endl;
	}
	
	return 0 ; 
}
