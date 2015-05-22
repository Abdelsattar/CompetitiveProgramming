#include <iostream>
#include <sstream>
#include <fstream>
#include <cstdlib>

using namespace std;

void fileCount (string filename, int& chars, int& words, int& lines)
{
	ifstream File;
	string  HoleLine;
	chars=words=lines=0;
	File.open(filename.c_str());
	if(File)
	while (!File.eof())
	{
		getline(File,HoleLine);
		lines++;
		
		chars+=HoleLine.size();
		for( int i = 0 ; i < HoleLine.size() ; i++ )
		{
			if(HoleLine[i]=' ' && HoleLine[i-1]!=' ')
			words++;
		}
	}
	if(chars==0)
	{
		lines=0; words=0;
	}
}
string fileInfo(string filename)
{
	
}

int main()
{
	int chars,words,lines;
	string m;
	cin>>m;
	cout<<chars<<" "<< words<<" "<<lines<<endl;
	fileCount(m , chars , words , lines );
		cout<<chars<<" "<< words<<" "<<lines<<endl;
}

