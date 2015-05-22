#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

int main()
{
    int tests;
    cin>>tests;
    string word="", input;

    for (int i =0 ; i< tests ; i ++)
    {
        getline(cin,input);
         word="";
         cout<<input;
        for (int l=0 ; l<input.size() ; l++)
        {
            if(l==0 && input[0]!=' ')
              word+=input[0];
             else if ( input[l]==' ' && input[l+1]!=' ')
              word+=input[l];
        }
        cout<<word<<endl;
    }

    return 0;
}
