#include<iostream>
using namespace std;

int main()
{
    int a, b, c, n, value;
    cin >> a >> b >> c >> n;

    value = a;
    for(int i = 0 ; i < n - 1 ; i++)
    {
        value = value * b + c;
    }
    cout << value;

    return 0;
}