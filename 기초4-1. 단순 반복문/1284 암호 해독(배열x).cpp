#include<iostream>
#include<math.h>
using namespace std;

int isPrimeNumber(int value)
{
    for(int i = 2 ; i*i <= value ; i++)
    {
        if(value % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n, n_sqrt;
    bool result = false;
    cin >> n;
    n_sqrt = sqrt(n);

    for(int i = 2 ; i <= n_sqrt ; i++)
    {
        if(n % i == 0)
        {
            if(isPrimeNumber(i) && isPrimeNumber(n / i))
            {
                cout << i << ' ' << n / i;
                result = true;
                return 0;
            }
        }
    }

    cout << "wrong number";

    return 0;
}