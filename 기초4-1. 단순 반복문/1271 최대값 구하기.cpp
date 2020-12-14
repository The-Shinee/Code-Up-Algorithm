#include<iostream>
using namespace std;

int main()
{
    int n, max = 0;
    int arr[1000];

    cin >> n;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0 ; i < n ; i++)
    {
        if(max < arr[i])
            max = arr[i];
    }

    cout << max;

    return 0;
}