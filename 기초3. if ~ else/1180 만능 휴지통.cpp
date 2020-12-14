#include<iostream>
using namespace std;

int main()
{
    int n, tens, units;
    cin >> n;

    tens = n - (n % 10);
    units = n % 10;
    n = ((units * 10) + (tens / 10)) * 2;
    if(n >= 100)
    {
        n -= 100;
    }
    cout << n << '\n';

    if(n <= 50)
    {
        cout << "GOOD";
    }
    else
    {
        cout << "OH MY GOD";
    }

    return 0;
}