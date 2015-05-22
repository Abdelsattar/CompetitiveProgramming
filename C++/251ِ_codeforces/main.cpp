#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n ,d ,sum=0 ;
    cin >> n >> d;
    vector <int> vec(n);
    for( int i =0 ; i< n ;i ++)
    {
        cin>>vec[i];
        sum+=vec[i];
    }

     int sz=vec.size() ,nJokes=0;
      sz--;
      sz*=10;
      sum+=sz;

     // cout<<sum<<" Id " <<d<<endl;
      if ( sum >d)
        cout<< "-1"<<endl;
      else
        {
            sz/=5;
            nJokes+=sz;
            sum = d-sum;
            sum/=5;
            nJokes+=sum;
            cout<<nJokes<<endl;
        }
    return 0;
}
