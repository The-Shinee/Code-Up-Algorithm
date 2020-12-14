#include<iostream>
using namespace std;

int main()
{
    int day[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year, month;
    cin >> year >> month;

    if(month == 2 && (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)))
    {
        cout << 29;
    }
    else
    {
        cout << day[month];
    }

    return 0;
}