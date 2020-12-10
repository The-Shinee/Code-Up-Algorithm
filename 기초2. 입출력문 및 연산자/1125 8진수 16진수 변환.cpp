#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    
    int decimal;
    cin >> decimal;

    cout.setf(ios::uppercase);
    cout << oct << decimal << ' ' << hex << decimal;

    return 0;
}