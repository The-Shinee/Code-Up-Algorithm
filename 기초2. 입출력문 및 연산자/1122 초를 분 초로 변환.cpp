#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    
    int sec, min = 0;
    cin >> sec;

    while(sec >= 60)
    {
        min++;
        sec -= 60;
    }

    cout << min << ' ' << sec;

    return 0;
}