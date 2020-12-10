#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    
    int c;
    double f;

    cin >> c;
    f = static_cast<double>(9) / static_cast<double>(5) * static_cast<double>(c) + 32;

    cout << fixed;
    cout.precision(3);
    cout << f;

    return 0;
}