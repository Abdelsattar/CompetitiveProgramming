#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string word;
    vector <string> vec;
    vector <string> vec2;
    cout<<"enter words\n";
    map<string,int>mymap;
    map<string,int>::iterator i= mymap.begin();
    int x=0;
    cin>>word;
    while(word!="done")
    {
        x=mymap.count(word);
        if(x==0)
        {
            mymap.insert(i,pair<string,int>(word,1));
           vec.push_back(word);
           vec2.push_back(word);
        i++;
        }
        else
        {
            mymap.insert(i,pair<string,int>(word,1));
            mymap[word]+=1;
        }


        cin>>word;

    }
for(int i=0;i<vec.size();i++)
{
    cout<<vec[i]<<"\t\t\t\t";
    cout<<mymap[vec[i]]<<endl;
}
cout<<endl<<endl<<"\t\t///////////////////\n";
for(int i=0;i<vec2.size();i++)
{
if(vec2[i].at(0)=='a')
    continue;
    cout<<vec2[i]<<"\t\t\t\t";
    cout<<mymap[vec2[i]]<<endl;
}
    return 0;
}
