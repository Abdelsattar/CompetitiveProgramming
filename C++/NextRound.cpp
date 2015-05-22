#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n,k,z,q=0,st=0,befor=0;
    cin>>n>>k;
    if(n>=k & k>=1 & k<=50 & n<=50)
    {
     for(int i=0 ; i<n ; i++)
     {
    	cin>>z;
    	if(i>0)
    	{
    	if(z>befor)
    	return 0;}
    	befor=z;
    	
    	if(i<k & z!=0 )
    	q++;
    	else if (i==k & z!=0)
    	{
    		st=z;
    		q++;
    	}
    	else if(i>k)
    	{
    		if(z==st && z!=0)
    		q++;
    	}
     }
     cout<<q<<endl;
    } 
    
    else
    { 
     cout<<"Error"<<endl;
    }
    return 0;
}
   /* 
    if(n>=k & k>=1 & k<=50 & n<=50)
    {
       cin>>z;
        st=z;
        if(z<0)
        return 0;
        if (st==k)
        {if(z>=k)
          q++;}
        else if(z>k)
        {q++;}
        else if (z<k)
        {if(z==st & z!=0)
	     q++;}
        
    for(int i=1;i<n;i++)
    {	cin>>z;        
        if(z<0)
        return 0;
        if (st==k)
        {if(z>=k)
         q++;}
        else if(z>k)
        {q++;}
        else if (z<k)
        { if(z==st & z!=0)
        	q++;}
    }
    cout<<q<<endl;
    } 
    
    else
    { 
     cout<<"Error"<<endl;
    }
    return 0;
}*/
