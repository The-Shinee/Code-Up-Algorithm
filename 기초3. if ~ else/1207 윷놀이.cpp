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
        cout << "��";
    }
    else if(value == 2)
    {
        cout << "��";
    }
    else if(value == 3)
    {
        cout << "��";
    }
    else if(value == 4)
    {
        cout << "��";
    }
    else if(value == 0)
    {
        cout << "��";
    }

    return 0;
}