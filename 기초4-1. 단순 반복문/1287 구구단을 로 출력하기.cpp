#include<iostream>
using namespace std;

int main()
{
    int n, i, j;
    cin >> n;
    for(i = 1 ; i <= 9 ; i++)
    {
        for(j = 1 ; j <= n * i ; j++)
        {
            cout <<'*';
        }
        cout << '\n';
    }

    return 0;
}