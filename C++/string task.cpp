// Mido_Fci
// 3-7-2014 
// 2:46pm
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
	cin>>word;
	
	for (int i=0 ; i<word.size() ; i++)  // "A", "O", "Y", "E", "U", "I"
	{
		if (word[i]=='A' | word[i]=='a' | word[i]=='O' | word[i]=='o'|
		word[i]=='Y' | word[i]=='y' | word[i]=='E' | word[i]=='e' |
		word[i]=='U' | word[i]=='u' |word[i]=='I' | word[i]=='i'  )
		{
			word.erase(i,1);
			i=i-1;
		}
	}
	char *yaah= new char[2*word.size()];
	for(int i=0 , l=0; i<word.size()  ; i ++,l+=2)
		{
			yaah[l]='.';
			if(isupper(word[i]))
			   word[i]=tolower(word[i]);
			yaah[l+1]=word[i];
		}
		
	for(int i=0; i<(word.size()*2)  ; i++)
	cout<<yaah[i];
	cout<<endl;
	return 0;
	

}
