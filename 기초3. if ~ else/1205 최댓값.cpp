#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a, b, arr[5];
    double Max = 0;
    cin >> a >> b;

    arr[0] = a + b;
    arr[1] = (a >= b ? a - b : b - a);
    arr[2] = a * b;
    arr[3] = (a <= b ? b / a : a / b);
    arr[4] = (pow(a, b) >= pow(b, a) ? pow(a, b) : pow(b, a));

    for (int i = 0; i < 5; i++)
    {
        if (Max < arr[i])
            Max = arr[i];
    }

    cout << fixed;
    cout.precision(6);
    cout << Max;

    return 0;
}