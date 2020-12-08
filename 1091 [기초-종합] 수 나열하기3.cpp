#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    long long a, m, d, n, result;
    cin >> a >> m >> d >> n;
    result = a;

    for(int i = 1 ; i < n ; i++)
    {
        result *= m;
        result += d;
    }

    cout << result;

    return 0;
}