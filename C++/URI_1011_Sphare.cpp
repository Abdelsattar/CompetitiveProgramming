
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
    double Pi=3.14159,final;
    int R;
    cin>>R;
    R=pow(R,3);
    final =(4.0/3)*Pi*R;
     cout<<fixed;
     cout.precision(3);
     cout<<"VOLUME = "<<final
     <<endl;

    return 0;
}



