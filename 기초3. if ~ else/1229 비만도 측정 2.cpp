#include<iostream>
using namespace std;

int main()
{
    double h, w, standard, BMI;
    cin >> h >> w;

    if(h < 150)
        standard = h - 100;
    else if(h < 160)
        standard = (h - 150) / 2 + 50;
    else
        standard = (h - 100) * 0.9;
    
    BMI = (w - standard) * 100 / standard;

    if(BMI <= 10)
        cout << "����";
    else if(BMI <= 20)
        cout << "��ü��";
    else
        cout << "��";

    return 0;
}