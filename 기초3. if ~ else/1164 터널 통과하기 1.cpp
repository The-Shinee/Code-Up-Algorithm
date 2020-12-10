#include<iostream>
using namespace std;

int main()
{
    int t1, t2, t3, car = 170;
    cin >> t1 >> t2 >> t3;

    if((t1 > car ? true : false) && (t2 > car ? true : false) && (t3 > car ? true : false))
        cout << "PASS";
    else
        cout << "CRASH";

    return 0;
}