#include<iostream>
using namespace std;

int main()
{
    double a, b, increase, profit;
    cin >> a;
    cin >> b;
    profit = a;

    for(int i = 1 ; i <= b ; i++)
    {
        cin >> increase;
        a *= 1 + increase / 100; 
    }
    profit = a - profit;

    cout << fixed;
    cout.precision(0);
    cout << profit << '\n';

    if(profit > 0)
        cout << "good";
    else if(profit < 0)
        cout << "bad";
    else if(profit == 0)
        cout << "same";

    return 0;
}