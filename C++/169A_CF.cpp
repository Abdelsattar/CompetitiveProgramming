#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
   int n , a ,b ,x=0;
   cin >> n >>a >>b;
   vector <int> vec(n);

   for(int i=0 ; i< n ; i++)
   cin>>vec[i];
  sort ( vec.begin(), vec.begin()+n);
   b;
   if(vec[b-1]==vec[b])
    cout<<0<<endl;
    else
    {
        for ( int i=vec[b-1] ; i< vec[b] ;i++)
        x++;
        cout<<x<<endl;
    }
    return 0;
}
