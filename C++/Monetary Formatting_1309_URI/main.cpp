#include <iostream>
#include <string>
using namespace std;
int main()
{
    string num,cent,numaf="",sub="";
    while (cin)
    {
        cin >>num>>cent;
        if(cent.size()==2)
        numaf='.'+cent;
        else
        numaf=".0"+cent;
        for (int i=num.size()-1 , count=0 ; i>=0 ; i--,count++)
        {
            if(count%3==0 && count!= 0 )
            {
                numaf=','+numaf;
            }
            numaf=num[i]+numaf;

        }
        cout<<"$"<<numaf<<endl;
    }
    return 0;
}
