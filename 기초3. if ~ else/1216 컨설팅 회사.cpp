#include<iostream>
using namespace std;

int main()
{
    int income, income_ad, price;
    cin >> income >> income_ad >> price;

    if(income > income_ad - price)
        cout << "do not advertise";
    else if(income < income_ad - price)
        cout << "advertise";
    else
        cout << "does not matter";

    return 0;
}