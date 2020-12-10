#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int Input, i;
    cin >> Input;
    
    for(i = 1 ; i <= Input ; i++)
    {
        if(i % 3 == 0)
            continue;
        cout << i << ' ';
    }

    return 0;
}