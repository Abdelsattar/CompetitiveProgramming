// Mido_Fci
// 5-7-2014 
// 1:46pm
// Ramadan 
// EL 3arei4 
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
using namespace std;
int main()
{
	string letters; 
	getline(cin ,letters );
	cout<<"Ready\n";
	do
	{	
		if(letters[0]==' ' && letters[1]==' ')
		return 0 ;
		else if (letters[0]=='p' && letters[1]=='q')
			cout<<"Mirrored pair"<<endl;
		else if (letters[0]=='q' && letters[1]=='p')
			cout<<"Mirrored pair"<<endl;
		else if (letters[0]=='d' && letters[1]=='b')
			cout<<"Mirrored pair"<<endl;
		else if (letters[0]=='b' && letters[1]=='d')
			cout<<"Mirrored pair"<<endl;
		else
		cout<<"Ordinary pair\n";
	}while(getline(cin ,letters ));
return 0 ;
}
