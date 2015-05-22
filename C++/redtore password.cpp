#include <iostream>
#include <string>

using namespace std; 

int main ()
{
	string str,arr[10],arr2[8],res="";
	cin>>str;
	// cout << " string = " <<str<<endl;
	
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	
    for(int i=0;i<80;i++)
    {
    	if(i<=9)
    	arr2[0]=arr2[0]+(str[i]);
    	
    	else if(i>9 & i<=19 )
    	arr2[1]=arr2[1]+str[i];
    	
    	else if(i>19 & i<=29)
    	arr2[2]=arr2[2]+str[i];
    	
    	else if(i>29 & i<=39)
    	arr2[3]=arr2[3]+str[i];
    	
    	else if(i>39 & i<=49)
    	arr2[4]=arr2[4]+str[i];
    	
    	else if(i>49 & i<=59)
    	arr2[5]=arr2[5]+str[i];
    	
    	else if(i>59 & i<=69)
    	arr2[6]=arr2[6]+str[i];
    	
    	else if(i>69 & i<=79 )
    	arr2[7]=arr2[7]+str[i];
    	
    }
    
    
    for (int q=0;q<8;q++)
    {
    	if(arr2[q]==arr[0])
    	res+="0";
    	
    	else if(arr2[q]==arr[1])
    	res+="1";
    	
    	else if(arr2[q]==arr[2])
    	res+="2";
    	
    	else if(arr2[q]==arr[3])
    	res+="3";
    	
    	else if(arr2[q]==arr[4])
    	res+="4";
    	
    	else if(arr2[q]==arr[5])
    	res+="5";
    	
    	else if(arr2[q]==arr[6])
    	res+="6";
    	
    	else if(arr2[q]==arr[7])
    	res+="7";
    	
    	else if(arr2[q]==arr[8])
    	res+="8";
    	
    	else if(arr2[q]==arr[9])
    	res+="9";
							 
    }       
    cout <<res<<endl;
    return 0;
    /*
    cout << " string = " <<str<<endl;
    for(int i=0;i<10;i++)
	{
		cout<< "   "<<arr[i]<<endl;
	}
	for(int i=0;i<8;i++)
	{
		cout<<arr2[i]<<endl;
	}
	*/
	
}
