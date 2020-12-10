#include<iostream>
using namespace std;

int map[20][20];

int main()
{
    ios::sync_with_stdio(false);

    int n, i, j, x, y;
    cin >> n;
    for(i = 1 ; i <= n ; i++)
    {
        cin >> x >> y;
        map[x][y] = 1;
    }

    for(i = 1 ; i <= 19 ; i++)
    {
        for(j = 1 ; j <= 19 ; j++)
        {
            cout << map[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}