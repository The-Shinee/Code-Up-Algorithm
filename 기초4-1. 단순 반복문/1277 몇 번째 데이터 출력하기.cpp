#include<iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int* arr = new int[N + 1];
    int mid = N / 2 + 1;

    for(int i = 1 ; i <= N ; i++)
    {
        cin >> arr[i];
    }

    cout << arr[1] << ' ' << arr[mid] << ' ' << arr[N];

    return 0;
}