#include<iostream>
using namespace std;

int main()
{
    int a, b, plus;
    cin >> a >> b;

    if(a % 2 == 1)
        cout << "�汝�+";
    else if(a % 2 == 0)
        cout << "礎熱+";
    
    if(b % 2 == 1)
        cout << "�汝�=";
    else if(b % 2 == 0)
        cout << "礎熱=";

    plus = a + b;
    if(plus % 2 == 1)
        cout << "�汝�";
    else if(plus % 2 == 0)
        cout << "礎熱";  

    return 0;
}