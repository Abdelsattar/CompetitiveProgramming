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
    int num,count,cmd,t=1;
    while(cin>>num && num!=-1)
    {
        count=0,cmd=1;
        for(int i=1 ; i<num ; i++)
        {
            count++;
            cmd*=2;
            if(cmd>=num)
                break;
        }
        cout<<"Case "<<t++<<": "<<count<<endl;
    }
}
