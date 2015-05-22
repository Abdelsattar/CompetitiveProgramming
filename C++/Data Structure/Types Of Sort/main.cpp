//#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void selection_Sort(vector <int> &vec){
    int min,index;
    for(int i=0 ; i<vec.size() ; i++){
        min =vec[i];
        index = i;
        for(int q=i ; q<vec.size() ;q++){
           if(vec[q]<min){
                min=vec[q];
                index=q;
           }
        }
        if(index!=i)
            swap(vec[index], vec[i]);
    }

}

int main()
{
    int sz;
    cout<<"Enter the size of vector "<<endl;
        cin>>sz;
    vector <int> vec(sz);
    for(int i=0 ; i<sz ; i++)
        cin>>vec[i];
    selection_Sort(vec);

    for(int i=0 ; i<sz ; i++)
        cout<<vec[i]<<endl;

    return 0;
}
