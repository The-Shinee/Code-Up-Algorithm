#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    
    int a, b, c;
    cin >> a >> b >> c;

    double average = a + b + c;
    average /= 3;

    cout << fixed;
    cout.precision(2);
    cout << average;

    return 0;
}