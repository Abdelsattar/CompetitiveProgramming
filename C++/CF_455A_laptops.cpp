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

int main()
{
    int n,min,max,posx,posn,m,k;
    cin>>n;
    vector <int> vec1(n);
    vector <int> vec2(n);

//
//	FOR (INT I = 0; I< (N - 1); I++)
//	{
//		FOR (INT J = (I + 1); J < N; J++)
//		{
//			IF (VEC1[I] > VEC1[J])
//				{
//                    SWAP(VEC1[I], VEC1[J]);
//                    SWAP(VEC2[I], VEC2[J]);
//				}
//		}
//	}
   // FOR(INT I=0 ;I<N ; I++)
     //   COUT<<VEC1[I]<<" "<<VEC2[I]<<ENDL;
    map <int , int> mymap;
    map <int , int> :: iterator iter;
    for(int i=0 ; i<n ; i++)
        {
            cin>>m>>k;
            mymap[m]=k;
        }
    int co=0;
    for(iter = mymap.begin() ; iter != mymap.end(); iter++)
    {
            vec1[co] = iter->first ;
            vec2[co] = iter->second;
            co++;
    }


    for(int i=0 ; i<n-1 ; i++)
    {
            if(vec1[i]<vec1[i+1] && vec2[i]>vec2[i+1])
            {
                cout<<"Happy Alex"<<endl;
                return 0;
            }
            else if(vec1[i]>vec1[i+1] && vec2[i]<vec2[i+1])
            {
                cout<<"Happy Alex"<<endl;
                return 0;
            }

    }
        cout<<"Poor Alex"<<endl;

       return 0;
}
