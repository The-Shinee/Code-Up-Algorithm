#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if(n % 10 == 1)
    {
        if(n == 11)
        {
            cout << n << "th";
        }
        else
        {
            cout << n << "st";    
        }
    }
    else if(n % 10 == 2)
    {
        if(n == 12)
        {
            cout << n << "th";
        }
        else
        {
            cout << n << "nd";    
        }
    }
    else if(n % 10 == 3)
    {
        if(n == 13)
        {
            cout << n << "th";
        }
        else
        {
            cout << n << "rd";    
        }
    }
    else
    {
        cout << n << "th";
    }

    return 0;
}