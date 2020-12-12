#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int h, m;
    cin >> h >> m;

    if(m >= 30)
    {
        cout << h << ' ' << m;
    }
    else
    {
        cout << h - 1  << ' ' << 30 + m;
    }
    
    return 0;
}