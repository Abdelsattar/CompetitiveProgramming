#include <iostream>
using namespace std;
int main()
{
   int test ,szA,szB;
   string word1,word2;
   cin>>test;
    for ( int i =0 ; i< test ; i++)
    {
         cin>>word1>>word2;
         szA=word1.size();
         szB=word2.size();

        bool check=true;
        if(szB <=szA)
        {
            for (int i=szA-1 ,l =szB-1 ; l>=0 ; l-- , i--)
            {
                if(word1[i] != word2[l])
                {
                    cout<<"nao encaixa"<<endl;
                    check=false;
                    break;
                }
            }
            if(check)
            cout<<"encaixa"<<endl;
        }
        else
         cout<<"nao encaixa"<<endl;
    }
    return 0;
}
