#include <iostream>
#include <vector>
using namespace std;
/*
int sumvec(vector vec , int l )
{
    int sum=0;
    for (int i =0 ; i< l ; i++)
      sum+=vec[i];

      return sum;
}*/

int main()
{
    int n ,m, count=1 ;
    cin >>n>>m;
    vector < int > vec(n);

    for (int i = 0 ; i<n ; i++)
    cin>>vec[i];

    int sum1 ,sum2,_7aga;
    for (int i = 0 ; i < n ; i++)
    {
        sum1=0;
        for (int k =0 ; k< i ; k++)
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
