#include<iostream>
using namespace std;

int donate(int number);

int main()
{
    int k, h;
    cin >> k >> h;
    
    cout << donate(k) + donate(h);

    return 0;
}

int donate(int number)
{
    if(number % 2 == 1)
    {
        return number / 2 + 1;
    }
    else
    {
        return number / 2 * 10;
    }
}