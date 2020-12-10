#include<iostream>
using namespace std;

int main()
{
    int ball;
    cin >> ball;

    if((ball >= 50 && ball <= 70) || (ball % 6 == 0))
        cout << "win";
    else
        cout << "lose";

    return 0;
}