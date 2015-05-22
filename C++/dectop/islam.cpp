#include<iostream>
#include <fstream>
#include<string>
using namespace std;
int main(){
    
    fstream file ;
    
   file.open(filename.c_str());

	char ch;
	string  s; 

	while(file.eof())
	{
       getline(file , s);

		file.get(ch);
	
    	cout << ch<<endl;
    	cout<<s<<endl;
   	
   	lines ++ ;

	}
	
	file.close();
    
    system("pause");
    return 0;
    }
