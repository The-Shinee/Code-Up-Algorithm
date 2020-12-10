#include<iostream>
using namespace std;

int main()
{
    int day;
    cin >> day;

    if(day == 1 || day == 3 || day == 5 || day == 7)
        cout << "oh my god";
    else
        cout << "enjoy";

    return 0;
}