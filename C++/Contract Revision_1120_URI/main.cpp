#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    int D;
    string num1,word;

    cin>>D>>num1;
    do
    {
        if(D==0 && num1=="0")
        return 0;

        word="";
        for(int i=0 ;i<num1.size() ; i++)
        {
            char ch;
            stringstream ss;
            ss<<D;
            ss>>ch;
            if(num1[i]!=ch)
            word+=num1[i];

        }
         for(int l =0 ; l<word.size();l++)
         {
             if(word[l]=='0')
             {
                 word.erase(0,1);
                 l-=1;
             }
             else
             break;

         }
        long long wo=0;
        if(word.size()==0)
        cout<<"0"<<endl;
        else
        {
          cout<<word<<endl;

        }
         cin>>D>>num1;
    }while (D!=0 && num1!="0");

     return 0;
}
