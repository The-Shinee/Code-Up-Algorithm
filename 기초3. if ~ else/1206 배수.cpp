#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if(a % b == 0)
    {
        cout << b << '*' << a / b << '=' << b * (a / b);
    }
    else if(b % a == 0)
    {
        cout << a << '*' << b / a << '=' << a * (b / a);
    }
    else
    {
        cout << "none";
    }

    return 0;
}