#include<iostream>
using namespace std;

int Map[101][101];

int main()
{
    ios::sync_with_stdio(false);

    int h, w, n, l, d, x, y;
    cin >> h >> w;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> l >> d >> x >> y;

        for (int j = 1; j <= l; j++)
        {
            if (d == 1)
            {
                Map[x][y] = 1;
                x++;
            }
            else
            {
                Map[x][y] = 1;
                y++;
            }
        }
    }

    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            cout << Map[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}