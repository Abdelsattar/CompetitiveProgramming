#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin >> n && n != 0)
    {
        int sum = 0;
        for(int i = 0 ; i++ < n ; sum += i * i)
        cout << sum << '\n';
    }
}
