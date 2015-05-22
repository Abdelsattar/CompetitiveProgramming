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
    int x1,y1,x2,y2,x3,y3,x4,y4,Y ,X;
    cin >> x1 >> y1>>x2>>y2;
    if(x1 == x2)
    {
       Y=y2-y1;
       x3=x4=x1+Y;
       y3=y1;
       y4=y2;
    }
    else if (y1 == y2 )
    {
//       if(x1<0 && x2 <0)
//        {
//            if(abs(x1)>abs(x2))
//                X=abs(x1)-abs(x2);
//            else
//                X=abs(x2)-abs(x1);
//        }
//        else if (x1<0 || x2<0)
//        {
//            X=abs(x1)+abs(x2);
//        }
//        else
            X=x2-x1;
        y3=y4=X+y1;
        x3=x1;
        x4=x2;
    }
    else if(y2-x2+x1 == y1 || y1-x2+x1== y2 )
    {
        x3=x2;
        x4=x1;
        y3=y1;
        y4=y2;

//     if(x1<x2)
//     {
//         x3=x1;
//         y3=y1+(x2-x1);
//         x4=x2;
//         y4=y1;
//     }
//     else
//     {
//          x3=x2;
//         y3=y2+(x1-x2);
//         x4=x1+(x1-x2);
//         y4=y2;
//     }

    }
    else
    {
        cout<<-1<<endl;
        return 0 ;
    }
    cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
    return 0;
}
