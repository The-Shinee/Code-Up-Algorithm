#include<iostream>
using namespace std;

int main()
{
    int year, month, day, result;
    cin >> year >> month >> day;

    result = (year - month + day) % 10;

    if(result == 0)
        cout << "대박";
    else
        cout << "그럭저럭";

    return 0;
}