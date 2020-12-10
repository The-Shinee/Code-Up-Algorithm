#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int a, b, c, day = 1;
    cin >> a >> b >> c;

    do
    {
        day++;
    } while (day % a != 0 || day % b != 0 || day % c != 0);
    
    cout << day;

    return 0;
}