#include<iostream>
using namespace std;

int main()
{
    int a, b, sum = 0;
    cin >> a >> b;

    for(int i = a ; i <= b ; i++)
    {
        if(i % 2 == 1)
        {
            sum += i;
            cout << '+' << i;
        }
            
        if(i % 2 == 0)
        {
            sum -= i;
            cout << '-' << i;
        }
            
    }
    cout << '=' << sum;

    return 0;
}