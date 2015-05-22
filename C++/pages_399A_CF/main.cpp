// Mido_FCI cu
// ACM
// el haram lol =D
// 16-7-2014
// 4:16
#include <iostream>

using namespace std;

int main()
{
    int n , p , k ,k1;
    cin>>n>>p>>k;
    k1=k;

    if(p-k > 1)
    {

    cout<<"<<";
    if(p>1)
         {
             for(int i=0 ; k1>0 ; i++,k1--)
            {
                if(p-k1>0)
                cout<<" "<<p-k1;
            }
         }
    cout<<" "<<"("<<p<<")";

    for(int i=1 ; i<=k&& p+i<=n ; i++)
        cout<<" "<<p+i;
        if(p+k<n)
        cout<<" >>"<<endl;
    }
    else
    {
         if(p>1)
         {
             for(int i=0 ; k1>0 ; i++,k1--)
            {
                if(p-k1>0)
                cout<<p-k1<<" ";
            }
         }
            cout<<"("<<p<<")";

    for(int i=1 ; i <=k && p+i<=n ; i++)
        cout<<" "<<p+i;
        if(p+k<n)
        cout<<" >>"<<endl;
}

    return 0;
}
