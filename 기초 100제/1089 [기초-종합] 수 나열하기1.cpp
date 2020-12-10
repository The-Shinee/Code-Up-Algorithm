#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int a, d, n, result;
    cin >> a >> d >> n;
    result = a + ((n-1) * d);

    cout << result;

    return 0;
}