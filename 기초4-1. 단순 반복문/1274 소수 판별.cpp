#include<iostream>
using namespace std;

int main()
{
    int n;
    bool prime = true;
    cin >> n;

    for(int i = 2 ; i*i <= n ; i++)
    {
        if(n % i == 0)
        {
            prime = false;
            break;
        }
    }
    
    if(prime)
        cout << "prime";
    else
        cout << "not prime";    

    return 0;
}