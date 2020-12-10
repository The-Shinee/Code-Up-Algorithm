#include<iostream>
using namespace std;

int main()
{
    int front, back, old;
    cin >> front >> back;

    if(back == 1 || back == 2)
    {
        old = 2012 - (1900 + (front / 10000)) + 1;
    }
    else
    {
        old = 2012 - (2000 + (front / 10000)) + 1;
    }
        
    cout << old;

    return 0;
}