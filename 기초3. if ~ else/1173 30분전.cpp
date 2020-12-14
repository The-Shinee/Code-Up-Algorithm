#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int h, m;
    cin >> h >> m;

    if(m >= 30)
    {
        cout << h << ' ' << m - 30;
    }
    else
    {
        if(h == 0)
        {
            cout << 23  << ' ' << 30 + m;
        }
        else
        {
            cout << h - 1  << ' ' << 30 + m;
        }
    }
    
    return 0;
}