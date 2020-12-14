#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    
    long long a, r, n, result;
    cin >> a >> r >> n;

    result = a;

    for(int i = 1 ; i < n ; i++)
    {
        result *= r;
    }

    cout << result;

    return 0;
}