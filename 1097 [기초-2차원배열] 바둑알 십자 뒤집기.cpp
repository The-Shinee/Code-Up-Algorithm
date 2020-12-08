#include<iostream>
using namespace std;

int Map[20][20];

int main()
{
    ios::sync_with_stdio(false);

    int n, i, j, x, y;
    for(i = 1 ; i <= 19 ; i++)
    {
        for(j = 1 ; j <= 19 ; j++)
        {
            cin >> Map[i][j];
        }
    }

    cin >> n;
    for(int k = 1 ; k <= n ; k++)
    {
        cin >> x >> y;

        for(i = 1 ; i <= 19 ; i++)
        {
            if(Map[x][i] == 0)
                Map[x][i] = 1;
            else
                Map[x][i] = 0;
        }

        for(j = 1 ; j <= 19 ; j++)
        {
            if(Map[j][y] == 0)
                Map[j][y] = 1;
            else
                Map[j][y] = 0;
        }
    }

    for(i = 1 ; i <= 19 ; i++)
    {
        for(j = 1 ; j <= 19 ; j++)
        {
            cout << Map[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}