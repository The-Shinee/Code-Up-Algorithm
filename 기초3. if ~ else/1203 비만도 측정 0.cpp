#include<iostream>
using namespace std;

int main()
{
    int BMI;
    cin >> BMI;

    if(BMI <= 10)
    {
        cout << "����";
    }
    else if(BMI <= 20)
    {
        cout << "��ü��";
    }
    else
    {
        cout << "��";
    }

    return 0;
}