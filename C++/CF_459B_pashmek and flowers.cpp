//
//// Mido_Fci
//// 15-8-2014
//// 10:51am
//// EL 3arei4
//// ver: 2
//#include <iostream>
//#include <vector>
//#include <map>
//#include <cmath>
//#include <sstream>
//#include <algorithm>
//#include <cmath>
//#include <iomanip>
//#include <stdio.h>
//using namespace std;
//
//
//int main()
//{
//    long long N,b,min,max,diff,to=0;
//    cin>>N>>b;
//    min=max=b;
//    map <int ,int> mymap;
//    mymap[b]++;
//
//    for(int i=1 ;i<N ; i++)
//    {
//        cin>>b;
//        mymap[b]++;
//        if(b>max)
//            max=b;
//        if(b<min)
//            min=b;
//    }
//    diff=max-min;
//
//    if(min != max)
//    cout<<diff<<" "<<(mymap[min]*mymap[max])<<endl;
//    else
//    cout<<diff<<" "<<((N*(N-1))/2)<<endl;
//    return 0;
//}

// Mido_Fci
// 15-8-2014
// 10:51am
// EL 3arei4
// ver: 2
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <sstream>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <stdio.h>
using namespace std;


int main()
{
    long long N,b,min,max,diff,to=0,mn=0,mx=0;
    cin>>N>>b;
    min=max=b;
    vector <int> vec(N);
    vec[0]=b;

    for(int i=1 ;i<N ; i++)
    {
        cin>>vec[i];
        if(vec[i]>max)
            max=vec[i];
        if(vec[i]<min)
            min=vec[i];
    }
    for(int i =0 ; i <N ; i++)
    {
        if(vec[i]==max)
            mx++;
        if(vec[i]==min)
            mn++;
    }
    diff=max-min;

    if(min != max)
    cout<<diff<<" "<<(mn*mx)<<endl;
    else
    cout<<diff<<" "<<((N*(N-1))/2)<<endl;
    return 0;
}

