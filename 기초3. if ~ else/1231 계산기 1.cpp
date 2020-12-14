#include<iostream>
using namespace std;

int main()
{
    int a, b;
    char c;
    cin >> a >> c >> b;

    switch(c)
    {
        case '+':
            cout << a + b;
            break;
        case '-':
            cout << a - b;
            break;
        case '*':
            cout << a * b;
            break;
        case '/':
            cout << fixed;
            cout.precision(2);
            cout << static_cast<double>(a) / static_cast<double>(b);
            break; 
    }

    return 0;
}