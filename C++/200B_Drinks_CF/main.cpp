// Mido_Fci
// 4-7-2014
// 01:44pm
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
	double n, num,to=0.0, avg;
		cin>>n;
	for(int i=0 ;i < n ; i++)
	{
	    cin>>num;
	    to+=num;
	}
	avg= (to/n);
	cout.precision(12);
    cout << fixed <<avg<<endl;
	return 0;
}
