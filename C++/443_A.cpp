#include <iostream>
#include <string>
#include <map>

using namespace std ;
 int main ()
 {
     string word;
     cin.clear();
     getline(cin , word);
    map <char,int> Ouda;

	for ( int i=0 ; i< word.size() ; i++)
	    Ouda[word[i]]++;

		int count = 0;
	 map <char,int>::iterator iter;
  for( iter = Ouda.begin(); iter != Ouda.end(); iter++ )
  {
      if (iter->first == ',' || iter->first == '{' ||iter->first == ' ' ||iter->first == '}' );
      else
      count ++ ;
  }

 // count-=4;
  //if ( count < 0)
  //count =0;

  cout <<  count <<endl;

  return 0 ;
 }
