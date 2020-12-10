#include<iostream>
using namespace std;

int main()
{
    int a, b, plus;
    cin >> a >> b;

    if(a % 2 == 1)
        cout << "È¦¼ö+";
    else if(a % 2 == 0)
        cout << "Â¦¼ö+";
    
    if(b % 2 == 1)
        cout << "È¦¼ö=";
    else if(b % 2 == 0)
        cout << "Â¦¼ö=";

    plus = a + b;
    if(plus % 2 == 1)
        cout << "È¦¼ö";
    else if(plus % 2 == 0)
        cout << "Â¦¼ö";  

    return 0;
}