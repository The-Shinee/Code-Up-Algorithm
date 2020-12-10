#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int front, back, old;
    cin >> old;

    front = 2012 - old + 1;

    if(old >= 14)
    {
        front -= 1900;
        back = 1;
    }
    else
    {
        front -= 2000;
        back = 3;
    }

    cout << setw(2) << setfill('0') << front << ' ' << back;

    return 0;
}