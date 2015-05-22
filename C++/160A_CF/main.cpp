#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, sum =0, one=1, two=1;
    float half, sumfloat;
    cin >> n ;
    vector <int > vec(n);

    for (int i=0 ; i< n ; i++)
    {
        cin>>vec[i];
        sum+=vec[i];
    }
    sort(vec.begin() ,vec.begin()+n );
    half=(float)(sum/2);

    for(int i=0 ; i< n ; i++)
    {
        sumfloat+= (float)vec[i];
        if(sumfloat > half )
        {
            one++;
            break;
        }
    }
    sumfloat=0;
    for(int i=vec.size()-1 ; i>=0 ; i--)
    {
        sumfloat+= (float)vec[i];
        if(sumfloat > half )
        {
            two++;
            break;
        }
    }

    cout<<two<< " "<<one<<endl;
    if(two<=one)
    cout<<two<<endl;
    else
    cout<<one<<endl;

    return 0;
}
