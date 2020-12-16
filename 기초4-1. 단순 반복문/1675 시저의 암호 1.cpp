#include<iostream>
using namespace std;

int main()
{
    int i = 0;
    char Input[201];
    cin.getline(Input, 200);

    while (Input[i] != '\0')
    {
        if (Input[i] == ' ')
        {
            i++;
            continue;
        }
            
        if (Input[i] - 3 < 'a')
        {
            Input[i] += 26;
        }
        Input[i] -= 3;

        i++;
    }

    cout << Input;

    return 0;
}