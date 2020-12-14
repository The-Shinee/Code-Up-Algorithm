#include<iostream>
using namespace std;

int main()
{
    int arr[6] = {0, 400, 340, 170, 100, 70};
    int menuA, menuB, k = 0;
    cin >> menuA >> menuB;

    k += arr[menuA];
    k += arr[menuB];

    if(k > 500)
    {
        cout << "angry";
    }
    else
    {
        cout << "no angry";
    }

    return 0;
}