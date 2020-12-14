#include<iostream>
using namespace std;

int main()
{
    int BMI;
    cin >> BMI;

    if(BMI <= 10)
    {
        cout << "정상";
    }
    else if(BMI <= 20)
    {
        cout << "과체중";
    }
    else
    {
        cout << "비만";
    }

    return 0;
}