#include<iostream>
using namespace std;

int main()
{
    double height, weight, standard, BMI;
    cin >> height >> weight;

    standard = (height - 100) * 0.9;
    BMI = (weight - standard) * 100 / standard;

    if(BMI <= 10)
        cout << "����";
    else if(BMI <= 20)
        cout << "��ü��";
    else
        cout << "��";

    return 0;
}