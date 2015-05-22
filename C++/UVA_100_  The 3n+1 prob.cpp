#include <iostream>

using namespace std;

int _3n(int num)
{
    if(num==1)
        return 1;
    if(num%2==1)
           return  1+_3n(3*num+1);

            return 1+_3n(num/2);

}
int main()
{
    int n,m,max;
    while(cin>>n>>m)
    {
        max=0;

     if(n<m)
     {
         for(int i=n ; i<m ; i++)
        {
            if(_3n(i)>max)
                max=_3n(i);
        }
     }
     else if(n>m)
     {
            for(int i=m ; i<n ; i++)
        {
            if(_3n(i)>max)
                max=_3n(i);
        }
     }
     else if(n==m)
         max=_3n(m);
     cout<<n<<" "<<m<<" "<<max<<endl;
    }
}
