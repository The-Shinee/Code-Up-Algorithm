#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    
    int a, b;
    double area;

    cin >> a >> b;

    area = a * b;
    area /= 2;

    cout << fixed;
    cout.precision(1);
    cout << area;

    return 0;
}