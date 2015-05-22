#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int tests,num,count;
    cin>>tests;

   for (int i=0 ; i<tests ; i++)

      {
          vector <int> vec(10);
          for(int i =0 ; i< 10 ; i++)
                cin>>vec[i];
            sort(vec.begin() , vec.begin()+10);

            cout<<vec[1]<<endl;
    }
    return 0.;
}
