// mido_fci
// ACM _FCI _CU
// Ramadan
// 1:17 am
// 25 - 7 - 2014
#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

class RunLengthEncoding
{
    public:
         string decode(string text)
         {
             int num;
             bool check =false;
             long long count=0,pos;
             string word="",total="";
              string wo="TOO LONG";
             for ( int i = 0 ; i < text.size() ; i++)
             {
                 if(text[i]>='0' && text[i] <= '9')
                   {
                        check=true;
                        count++;
                        pos=i;
                   }
                else
                {
                    if(check)
                    {

                    word=text.substr(i-count,count);
                    stringstream ss;
                    ss<<word;
                    ss>>num;
                    if(num>50 || num<0)
                    return wo;
                    check=false;
                    for(int m= 0 ; m<num ; m++)
                    {
                        total+=text[i];
                    }
                    }
                    else
                    total+=text[i];
                    count=0;
                }

             }

             if (total.size() >50)
             return wo;
             else
             return total;
         }
};


int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
