#include<iostream>
using namespace std;

int Map[11][11];

int main()
{
    ios::sync_with_stdio(false);

    int i, j, x = 2, y = 2;
    for(i = 1 ; i <= 10 ; i++)
    {
        for(j = 1 ; j <= 10 ; j++)
        {
            cin >> Map[i][j];
        }
    }

    while(true)
    {
        if(Map[y][x] == 2)
        {
            Map[y][x] = 9;
            break;
        }

        if(Map[y + 1][x] == 1 && Map[y][x + 1] == 1)
        {
            Map[y][x] = 9;
            break;
        }

        Map[y][x] = 9;

        if(Map[y][x + 1] == 1)
        {
            y++;
        }
        else
        {
            x++;
        }

    }

    for(i = 1 ; i <= 10 ; i++)
    {
        for(j = 1 ; j <= 10 ; j++)
        {
            cout << Map[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}