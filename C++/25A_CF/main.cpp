#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int x,eve=0 ,od =0 ,eveen ,oddd;
    cin>>x;
    vector < int > vec(x);

    for ( int i=0 ; i< x ;i++)
    {
        cin>>vec[i];
        if(vec[i]%2 == 0)
         {
             eve++;
            eveen=i;
         }
         else
         {
             od++;
             oddd=i;
         }

    }
    if(eve==1)
    cout<< eveen+1<<endl;
    else
    cout<< oddd+1<<endl;
    return 0;
}
