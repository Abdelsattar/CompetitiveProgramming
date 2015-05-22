// mido_fci
// ACM _FCI _CU
// Ramadan
// 1:17 am
// 25 - 7 - 2014
#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

class RedAndGreen
{
    public:
    int minPaints(string row)
    {
        int count=0;
        for( int i=1 ; i< row.size()-1 ; i++)
        {
            if(row[i-1]==row[i+1]&& row[i]!=row[i-1])
                count++;

        }
        return count;
    }

};

