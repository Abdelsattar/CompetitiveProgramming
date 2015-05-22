#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int n;
    string name;

    cin>>n>>name;

    if(n==8)
        cout<<"vaporeon"<<endl;
    else if(n==7)
    {
        string arr[]={"jolteon" ,"flareon" ,"umbreon", "leafeon" ,"glaceon" , "sylveon"};
        for(int i=0 ; i<6 ; i++)
        {
            bool check=true;

            for(int j =0 ; j<4 ; j++)
            {
                if(name[j] !='.')
                {
                    if(arr[i][j]!=name[j])
                        {
                            check=false;
                            break;
                        }
                }
            }
            if(check)
            {
                cout<<arr[i]<<endl;
                return 0;
            }

        }

    }
     else if (n==6)
            cout<<"espeon"<<endl;
    return 0;
}
