#include <iostream>

using namespace std;

int main()
{
    int tests,num,count1,count2,num1;
    cin>>tests;

   for (int i=0 ; i<tests ; i++)

      {
          cin>>num;
          num1=num ;
         count1=count2=0;
        for(int m=0 ; num!=1 ; m++)
        {
             if(num%3==0)
                num/=3;
            else if(num%2 ==0 )
                num/=2;
            else
            num-=1;
            count1++;
        }
        for(int m=0 ; num1!=1 ; m++)
        {
            if(num1%2 ==0 )
                num1/=2;
            else if(num1%3==0)
                num1/=3;
            else
            num1-=1;
            count2++;
        }
        if(count1<=count2)
            cout<<"Case "<<i+1<<": "<<count1<<endl;
        else
            cout<<"Case "<<i+1<<": "<<count2<<endl;

    }
    return 0.;
}
