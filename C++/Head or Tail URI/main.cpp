#include <iostream>

using namespace std;

int main()
{
    int testcases, marry=0 , john=0,m;
    cin>>testcases;
    if(testcases==0)
    return 0 ;
    else
    {

    do
    {

        marry=0 , john=0;
        for(int i=0 ; i< testcases ; i++)
        {
        cin >> m ;
        if( m==0 )
        marry++;
        else
        john++;
        }
        cout<< "Mary won "<< marry<<" times and John won "<<john<<" times"<<endl;

        cin>>testcases;
    }while(testcases);

    }
    return 0;
}
