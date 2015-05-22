////mido_fci
//// TOurnamaent amed ali
//// ramada 27
//// 26 - 7 - 2014
//// 1 :54 pm
//// el 3arie4
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <cmath>
//#include <set>
//#include <iterator>
//using namespace std;
//
//int main()
//{
//  int tests,n1,f1,d1,n2,f2,d2;
//   cin>>tests;
//
//    while(tests--)
//    {
//        cin>>n1>>f1>>d1>>n2>>f2>>d2;
//
//        vector <int> vec1(n1);
//        vector <int> vec2 (n2);
//        set<int> s1;
//        set<int> s2;
//        s1.insert(f1);
//        s2.insert(f2);
//        vec1[0]=f1;
//        vec2[0]= f2;
//        for(int i=1 ; i< n1 ; i++)
//            {
//                vec1[i]=vec1[i-1]+d1;
//                s1.insert(vec1[i]);
//            }
//
//        for(int i=1 ; i< n2 ; i++)
//            {
//                vec2[i]=vec2[i-1]+d2;
//                s2.insert(vec2[i]);
//            }
//            set<int> intersect;
//            set <int> :: iterator iter;
//            set_intersection(s1.begin(),s1.end(),s2.begin(),s2.end(), std::inserter(intersect,intersect.begin()));
//
//            int count=0;
//            for(iter =intersect.begin() ; iter != intersect.end() ; iter++)
//                count++;
//            cout<<count<<endl;
//    }
//    return 0;
//}
//mido_fci
// TOurnamaent amed ali
// ramada 27
// 26 - 7 - 2014
// 2 : 36pm
// el 3arie4
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
#include <iterator>
using namespace std;

int main()
{
  int tests,n1,f1,d1,n2,f2,d2;
   cin>>tests;

    while(tests--)
    {
        cin>>n1>>f1>>d1>>n2>>f2>>d2;

        vector <int> vec1(n1);
        vector <int> vec2 (n2);
        set<int> s1;
        set<int> s2;
        s1.insert(f1);
        s2.insert(f2);
        vec1[0]=f1;
        vec2[0]= f2;
        for(int i=1 ; i< n1 ; i++)
            {
                vec1[i]=vec1[i-1]+d1;
                s1.insert(vec1[i]);
            }

        for(int i=1 ; i< n2 ; i++)
            {
                vec2[i]=vec2[i-1]+d2;
                s2.insert(vec2[i]);
            }
            set<int> intersect;
            set <int> :: iterator iter;
            set_intersection(s1.begin(),s1.end(),s2.begin(),s2.end(), std::inserter(intersect,intersect.begin()));

            int count=0;
            for(iter =intersect.begin() ; iter != intersect.end() ; iter++)
                count++;
            cout<<count<<endl;
    }
    return 0;
}
