#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    double w, h, b, File = 0;
    cin >> w >> h >> b;
    File = (w * h * b) / (8 * 1024 * 1024);

    cout << fixed;
    cout.precision(2);
    cout << File << " MB";

    return 0;
}