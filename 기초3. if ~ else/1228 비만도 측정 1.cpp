#include<iostream>
using namespace std;

int main()
{
    double height, weight, standard, BMI;
    cin >> height >> weight;

    standard = (height - 100) * 0.9;
    BMI = (weight - standard) * 100 / standard;

    if(BMI <= 10)
        cout << "정상";
    else if(BMI <= 20)
        cout << "과체중";
    else
        cout << "비만";

    return 0;
}