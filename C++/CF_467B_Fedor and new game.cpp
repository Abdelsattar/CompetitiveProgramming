// Mido_Fci
// 11-8-2014
// 12:54 pm
// EL 3arei4
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <sstream>
using namespace std;

string tobinary(int num)
{
    int rem;
    string snum="";
    while(num>1)
    {
       snum+=(num%2)+48;
        num/=2;
    }
    snum+=(num%2)+48;
    return snum;
}
int main()
{
    int n,m,k,num,count=0,cnt;
    cin>>n>>m>>k;
    string word;
    vector <string> vec(m);
    for (int i=0; i<m+1 ; i++)
    {
        cin>>num;
        word=tobinary(num);
        if(i!=m)
            vec[i]=word;
    }
     for (int i=0; i<m ; i++)
    {
        cnt=0;

        if(word.size() >vec[i].size())
        {
             for(int l=0 ; l<vec[i].size() ;l++)
            {
                if(vec[i][l]!=word[l])
                    cnt++;
                if(cnt>k)
                    break;
            }

            if(cnt<=k)
                count++;
        }
        if(word.size() < vec[i].size())
        {
             for(int l=0 ; l<word.size() ;l++)
            {
                if(vec[i][l]!=word[l])
                    cnt++;
                if(cnt>k)
                    break;
            }
            if(cnt<=k)
                count++;
        }
        cout<<vec[i]<<"\n"<<word<<" "<< count<<endl<<endl;
    }
    cout<<count<<endl;
       return 0;
}
