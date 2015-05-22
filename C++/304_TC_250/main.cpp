#include <iostream>
#include <vector>
using namespace std;
class RugSizes
{
    public:
         int rugCount(int area)
         {
             float num;
             vector <int> vec;
             int num1;
             for (int  i=1 ; i<=(area/2) ; i++)
             {
                 num=(float)area/i;
                 num1=num;
                 if((num-num1)==0)
                 {
                     if(i%2 ==0 && num1%2 == 0 && i!=num1);
                     else
                     vec.push_back(num);
                 }
             }
             int sz=vec.size();
             cout<<sz<<endl;
             for ( int i=0 ; i<vec.size() ;i++)
             {
                 for(int m=i ; m<vec.size(); m++)
                 {
                     if(vec[m]*vec[i]==area)
                    {
                    	 sz--;
                    }
                 }
             }
             return sz ;
         }

};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
