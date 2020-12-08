#include<iostream>
using namespace std;

int number[23];

int main()
{
    ios::sync_with_stdio(false);

    int Input, Call;
    cin >> Input;
    for(int i = 1 ; i <= Input ; i++)
    {
        cin >> Call;
        number[Call-1]++;
    } 

    for(int i = 0 ; i < 23 ; i++)
    {
        cout << number[i] << ' ';
    }

    return 0;
}