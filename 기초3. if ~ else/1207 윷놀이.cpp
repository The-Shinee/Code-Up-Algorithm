#include<iostream>
using namespace std;

int arr[4];

int main()
{
    int value = 0;
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
    for(int i = 0 ; i < 4 ; i++)
    {
        if(arr[i] == 1)
            value++;
    }
    
    if(value == 1)
    {
        cout << "µµ";
    }
    else if(value == 2)
    {
        cout << "°³";
    }
    else if(value == 3)
    {
        cout << "°É";
    }
    else if(value == 4)
    {
        cout << "À·";
    }
    else if(value == 0)
    {
        cout << "¸ð";
    }

    return 0;
}