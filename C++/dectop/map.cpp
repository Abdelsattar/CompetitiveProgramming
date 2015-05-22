#include <iostream>
#include <map>
#include <cstring>
#include <sstream>
using namespace std;
int main()
{
	map<string, bool> nameToAge;
  nameToAge["mo"] = 20;
  
  string m="mo";
  if(nameToAge[m])
  cout<<" mido";
  nameToAge["name1"] = 30;
  cout<<nameToAge[m] <<" ---> "<<nameToAge["mido"];
  int i=5;
  string str="12";
  
  cout<<str<<endl;
}
