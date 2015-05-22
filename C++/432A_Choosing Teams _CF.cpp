// Mido_Fci
// 6-8-2014
// 3:28 am
// EL 3arei4
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <sstream>
using namespace std;

int main()
{
  int n,k,num,count=0;
  cin>>n>>k;

  for(int i=0 ;i <n ; i++)
    {
        cin>>num;
        if(5-num >=k)
            count++;
    }
    int numOfTeams=(count/3);
    cout<<numOfTeams<<endl;
    return 0;
}
