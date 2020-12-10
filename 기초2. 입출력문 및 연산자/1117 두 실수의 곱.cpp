#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    
    double a, b;
    cin >> a >> b;

    cout << fixed;
    cout.precision(2);
    cout << a * b;

    return 0;
}