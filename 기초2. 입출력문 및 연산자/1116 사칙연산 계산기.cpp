#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    
    long long a, b;
    cin >> a >> b;

    cout << a << '+' << b << '=' << a + b << '\n';
    cout << a << '-' << b << '=' << a - b << '\n';
    cout << a << '*' << b << '=' << a * b << '\n';
    cout << a << '/' << b << '=' << a / b << '\n';

    return 0;
}