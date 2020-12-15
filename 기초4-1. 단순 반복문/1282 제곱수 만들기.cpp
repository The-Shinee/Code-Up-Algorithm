#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n, k = 0;
    double t;
    cin >> n;
    t = static_cast<int>(sqrt(n));
    
    while(t != sqrt(n))
    {
        n--;
        k++;
    }

    cout << k << ' ' << t;

    return 0;
}