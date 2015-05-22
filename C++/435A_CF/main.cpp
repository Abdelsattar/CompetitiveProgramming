#include <iostream>
#include <vector>
#include <math.h>
using namespace std;


int main()
{
    int n ,m, count=0;
    cin >>n>>m;
    vector < int > vec(n);

    for (int i = 0 ; i<n ; i++)
    cin>>vec[i];


    if(n==1)
    {
        float n;
        n= (float)vec[0]/m;
        n=ceil(n);
        cout<<n<<endl;
        return 0;

    }
    int sum1 ,sum2,_7aga;

    for (int i = 0 ; i <= n -1; i++)
    {
        sum1=0;
        for (int k =0 ; k <= i ; k++)
          sum1+=vec[k];

        if ( i==0 )
        sum2=vec[i];

        if (sum1 < m)
        {
            sum2=sum1;
        }
        else if (sum1== m)
        {
            sum2=sum1;
            count ++;
        }
        else
        {
            sum2=sum1-sum2;
            count++;
        }
    }
    cout << count <<endl;
    return 0;
}
