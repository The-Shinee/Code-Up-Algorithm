#include<iostream>
using namespace std;

int main()
{
    int arr[5], max = -1000000, min = 1000000;

    for(int i = 0 ; i < 5 ; i++)
    {
        cin >> arr[i];
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }

    cout << max << '\n' << min;

    return 0;
}