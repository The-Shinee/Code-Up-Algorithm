#include<iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    if(a % 7 == 0)
        cout << "multiple";
    else
        cout << "not multiple";

    return 0;
}