#include<iostream>
using namespace std;

int main()
{
    int n, temp, count = 0;
    cin >> n;

    for(int i = 0 ; i < n ; i++)
    {
        cin >> temp;
        if(temp % 2 == 0)
            count++;
    }
    cout << count;

    return 0;
}