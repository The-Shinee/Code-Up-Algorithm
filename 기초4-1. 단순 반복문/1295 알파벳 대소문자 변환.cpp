#include<iostream>
using namespace std;

int main()
{
    int i = 0;
    char Input[1001];
    cin >> Input;

    while(Input[i] != '\0')
    {
        if(Input[i] >= 'a' && Input[i] <= 'z')
            Input[i] -= 32;
        else if(Input[i] >= 'A' && Input[i] <= 'Z')
            Input[i] += 32;

        i++;
    }
    
    cout << Input;

    return 0;
}