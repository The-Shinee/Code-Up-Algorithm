#include<iostream>
using namespace std;

int main()
{
    int ball;
    cin >> ball;

    if((ball >= 30 && ball <= 40) || (ball >= 60 && ball <= 70))
        cout << "win";
    else
        cout << "lose";

    return 0;
}