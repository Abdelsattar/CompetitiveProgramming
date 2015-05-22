#include <iostream>
#include <fstream>

using namespace std;

int file( )
{
   fstream File;
	char ch ;
	File.open("mido.txt");
	File<<"ahmed";
	int count =0 ;
	 while(!File.eof())
	 {
	 	File.get(ch);
	 	count++;
	 }
	 return count;
}

int main()
{
	cout<<file();
	
}
