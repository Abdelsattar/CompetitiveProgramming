#include<iostream>
#include<cstring>
using namespace std;
int main ()
{ 
 string word;
  cin>> word;
    
    for (int i=0 ;i<word.size();i++)
     { 
       if (word[i]=='H' || word[i]=='Q'||word[i]=='9')
        {cout<<"YES"<<endl;
         return 0;
        }
     }
     cout<<"NO"<<endl;
     return 0;
    
    
    
}
