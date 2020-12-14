#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    if(k == 0)
    {
        cout << 1;
    }
    else if(k == 1)
    {
        cout << n;
    }
    else
    {
        int value = n;
        for(int i = 2 ; i <= k ; i++)
        {
            n *= value;
        }
        cout << n;
    }

    return 0;
}