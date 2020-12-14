#include<iostream>
using namespace std;

int main()
{
    int arr[10];
    bool result = false;

    for(int i = 0 ; i < 10 ; i++)
    {
        cin >> arr[i];
    } 

    for(int i = 0 ; i < 10 ; i++)
    {
        if(arr[i] % 5 == 0)
        {
            cout << arr[i];
            result = true;
            break;
        }
    }

    if(!result)
        cout << 0;

    return 0;
}