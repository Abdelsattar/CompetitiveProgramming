// Mido_Fci
// 23-8-2014
// 6:44 pm
// EL 3arei4
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <sstream>
using namespace std;

int main()
{
    int T,N,pos,count;;
    int  C,min=9999999999;
    cin >>T;
    vector <int > vec1;
    vector <int > vec2;
    bool check;
    while(T--)
    {
        cin>>N>>C;
        vec1.resize(N);
        vec2.resize(N);
        count=0;
        for(int i=0 ; i<N ; i ++)
         cin>>vec1[i]>>vec2[i];
        while (true)
        {
            pos=-1;
            check =false ;
            min=9999999999;
            //cout<<" 1 \ n ";
            for(int i =0  ; i<N ; i ++)
            {
                if(vec1[i]<=C)
                {
                  if((vec1[i]-vec2[i])<=min)
                        {
                            pos=i;
                            min=(vec1[i]-vec2[i]);
                        }
                }
            }
           // cout<<" 2 \ n ";

            if(pos==-1)
                break;
            else
            {
              //  cout<<" 3 \ n ";
                count++;
   //             cout<<C<<" ->1 \n";
                C-=vec1[pos];
   //             cout<<C<<" ->2 \n";
                C+=vec2[pos];
//                  cout<<C<<" ->3 \n";
                if(vec1.size()==1)
                    break;
                vec1.erase(vec1.begin()+pos);
                vec2.erase(vec2.begin()+pos);
            }
          //    cout<<" 4 \ n ";
        }
        cout<<count<<endl;


        vec1.clear();
        vec2.clear();
    }


       return 0;
}
