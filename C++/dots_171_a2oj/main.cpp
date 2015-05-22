#include <iostream>

using namespace std;

int main()
{
    int tests,total,dots;
    cin>>tests;

    while(tests--)
    {
        cin>>dots;
        total=0;
        for(int i=1 ; i <=dots ; i++)
        {
            total+=i;
            if(total == dots)
                {
                    cout<<"Yes "<<endl;
                    break;

                }
            else if (total>dots)
            {
                    cout<<"No"<<endl;
                    break;
            }
        }
    }
    return 0.;
}
