#include<iostream>
using namespace std;

int main()
{
    int year, month, day, result;
    cin >> year >> month >> day;

    result = (year + month + day) / 100;

    if(result % 2 == 0)
        cout << "���";
    else
        cout << "�׷�����";

    return 0;
}