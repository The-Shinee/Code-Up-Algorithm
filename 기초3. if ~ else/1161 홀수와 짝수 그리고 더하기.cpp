#include<iostream>
using namespace std;

int main()
{
    int a, b, plus;
    cin >> a >> b;

    if(a % 2 == 1)
        cout << "Ȧ��+";
    else if(a % 2 == 0)
        cout << "¦��+";
    
    if(b % 2 == 1)
        cout << "Ȧ��=";
    else if(b % 2 == 0)
        cout << "¦��=";

    plus = a + b;
    if(plus % 2 == 1)
        cout << "Ȧ��";
    else if(plus % 2 == 0)
        cout << "¦��";  

    return 0;
}