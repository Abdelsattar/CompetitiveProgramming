#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int tests,nst;
    cin>>tests;

    for ( int i=0 ; i< tests ; i++)
    {
        cin>>nst;
        vector <string> vec1(nst);
        vector <string> vec2 (nst);
        for (int l=0 ;l < nst ;l++)
          cin>>vec1[l];
        for (int l=0 ;l < nst ;l++)
          cin>>vec2[l];
          string word="";
        for ( int m =0 ; m <nst ; m++)
        {
            int sz=vec2[m].size();
            float numA=0,count=0,pre=0;
            for ( int k = 0 ; k < sz ; k++)
            {
                if(vec2[m][k]=='A')
                {   numA++;
                    count++;
                }
                else if (vec2[m][k]=='P')
                count++;
            }
            pre = (numA/count);
            cout<<pre<<endl;

            if(pre>.25)
            word+=vec1[m]+" ";
        }

        for(int q=0 ;q<word.size()-1 ;q++)
        cout<<word[q];
    }

    return 0;
}
