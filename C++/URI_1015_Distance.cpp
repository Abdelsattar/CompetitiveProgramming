
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
    int x1,y1,x2,y2;
    double ans;
    cin>>x1 >> y1 >>x2>>y2;
    x2-=x1;
    y2-=y1;
    x2=pow(x2,2);
    y2=pow(y2,2);
    x2+=y2;
    ans=sqrt(x2);
     cout<<fixed;
     cout.precision(4);
     cout<<ans<<endl;

    return 0;
}



