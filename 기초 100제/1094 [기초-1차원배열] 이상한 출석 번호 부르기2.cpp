#include<iostream>
using namespace std;

int number[10000];

int main()
{
    ios::sync_with_stdio(false);

    int Input, Call, min = 10001;
    cin >> Input;
    for(int i = 0 ; i < Input ; i++)
    {
        cin >> Call;
        number[i] = Call;
    } 

    for(int i = 0 ; i < Input ; i++)
    {
        if(min > number[i])
            min = number[i];
    }

    cout << min;

    return 0;
}