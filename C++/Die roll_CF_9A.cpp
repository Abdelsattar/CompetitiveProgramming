// Mido_Fci
// 4-7-2014 
// 00:25pm
// Ramadan 
// EL 3arei4 
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <sstream>
using namespace std;

int main()
{
	int Y,W,D,max,pre;
	cin>>Y>>W;
	
	if(Y>W)
	max=Y;
	else
	max=W;
	
	D=(6-max)+1;
	
	 if(D==1)
        cout<<"1/6";
    else if(D==2)
        cout<<"1/3";
     else if(D==3)
        cout<<"1/2";
     else if(D==4)
        cout<<"2/3";
     else if(D==5)
        cout<<"5/6";
     else
        cout<<"1/1";
	
	return 0;
}
