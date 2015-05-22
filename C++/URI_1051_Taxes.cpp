#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
     double money,taxes;
     cin>>money;
     if(money >= 0 && money <= 2000.00)
     {
         taxes=0.00;
         cout << "R$ " << setprecision(2) <<taxes << '\n';
     }
     else if(money >= 2000.01 && money <= 3000.00)
     {
         taxes=(money-2000.00)/8;
            cout << "R$ " << setprecision(2) <<taxes << '\n';
     }
     else if(money >= 3000.01 && money <= 4500.00)
     {
         taxes=(money-2000.00)/18;
         cout<<taxes;
         cout<<fixed;
            cout.precision(2);
               cout << "R$ "  <<taxes << '\n';     }
     else if(money >= 4500.00)
     {
         taxes=(money-2000.00)/28;
        cout << "R$ " << setprecision(2) <<taxes << '\n';

     }
  //  cout << setprecision(5) << f << '\n';
    return 0;
}

