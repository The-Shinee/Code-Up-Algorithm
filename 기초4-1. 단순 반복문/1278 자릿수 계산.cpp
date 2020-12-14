#include<iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;

    do{
        n /= 10;
        count++;
    }while(n > 0);

    cout << count;

    return 0;
}