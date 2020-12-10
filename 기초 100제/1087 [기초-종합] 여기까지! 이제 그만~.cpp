#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    
    int Input, i = 1, sum = 0;
    cin >> Input;

    while(sum < Input)
    {
        sum += i;

        if(sum > Input)
            break;
        
        i++;
    }

    cout << sum;

    return 0;
}