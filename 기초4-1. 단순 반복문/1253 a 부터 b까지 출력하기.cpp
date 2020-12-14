#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    for(int i = (a < b ? a : b) ; i <= (a > b ? a : b) ; i++)
        cout << i << ' ';

    return 0;
}