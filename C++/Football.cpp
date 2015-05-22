#include <iostream>
#include <string>

using namespace std ;
 int main ()
 {
 	int count=0,cont=0,l;
    string x;
    cin>>x;
    l=x.size();
    if(l>100)
    return 0;
    
    for(int i=0; i<l;i++)
    {
    	int m=x[i]-48;
        if (m==1)
         {
         	count=0;
         	cont++;
         //	cout<<"100 "<<cont<<" "<<count<<endl;
         	if((cont)==7)
         	{
         		cout<<"YES"<<endl;
         		return 0;
         	}
        }
          
         
         else if (m==0)
          {
         	cont=0;
         	count++;
         	//cout<<" "<<count<<" "<<cont<<endl;
         	if((count)==7)
         	{
         		cout<<"YES"<<endl;
         		return 0;
         	}
          }
         
    }
    cout<<"NO"<<endl;
    
return 0;
 }
