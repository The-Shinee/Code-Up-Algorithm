#include<iostream>
using namespace std;

int main()
{
    char a, b;
    cin >> a >> b;

    for(char i = (a < b ? a : b) ; i <= (a > b ? a : b) ; i++)
        cout << i << ' ';
        
    return 0;
}