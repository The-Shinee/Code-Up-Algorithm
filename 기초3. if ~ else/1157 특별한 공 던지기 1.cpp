#include<iostream>
using namespace std;

int main()
{
    double ball;
    cin >> ball;
    
    if(ball >= 50 && ball <= 60)
        cout << "win";
    else
        cout << "lose";

    return 0;
}